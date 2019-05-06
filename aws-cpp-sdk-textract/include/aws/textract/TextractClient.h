/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/textract/model/AnalyzeDocumentResult.h>
#include <aws/textract/model/DetectDocumentTextResult.h>
#include <aws/textract/model/GetDocumentAnalysisResult.h>
#include <aws/textract/model/GetDocumentTextDetectionResult.h>
#include <aws/textract/model/StartDocumentAnalysisResult.h>
#include <aws/textract/model/StartDocumentTextDetectionResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Textract
{

namespace Model
{
        class AnalyzeDocumentRequest;
        class DetectDocumentTextRequest;
        class GetDocumentAnalysisRequest;
        class GetDocumentTextDetectionRequest;
        class StartDocumentAnalysisRequest;
        class StartDocumentTextDetectionRequest;

        typedef Aws::Utils::Outcome<AnalyzeDocumentResult, Aws::Client::AWSError<TextractErrors>> AnalyzeDocumentOutcome;
        typedef Aws::Utils::Outcome<DetectDocumentTextResult, Aws::Client::AWSError<TextractErrors>> DetectDocumentTextOutcome;
        typedef Aws::Utils::Outcome<GetDocumentAnalysisResult, Aws::Client::AWSError<TextractErrors>> GetDocumentAnalysisOutcome;
        typedef Aws::Utils::Outcome<GetDocumentTextDetectionResult, Aws::Client::AWSError<TextractErrors>> GetDocumentTextDetectionOutcome;
        typedef Aws::Utils::Outcome<StartDocumentAnalysisResult, Aws::Client::AWSError<TextractErrors>> StartDocumentAnalysisOutcome;
        typedef Aws::Utils::Outcome<StartDocumentTextDetectionResult, Aws::Client::AWSError<TextractErrors>> StartDocumentTextDetectionOutcome;

        typedef std::future<AnalyzeDocumentOutcome> AnalyzeDocumentOutcomeCallable;
        typedef std::future<DetectDocumentTextOutcome> DetectDocumentTextOutcomeCallable;
        typedef std::future<GetDocumentAnalysisOutcome> GetDocumentAnalysisOutcomeCallable;
        typedef std::future<GetDocumentTextDetectionOutcome> GetDocumentTextDetectionOutcomeCallable;
        typedef std::future<StartDocumentAnalysisOutcome> StartDocumentAnalysisOutcomeCallable;
        typedef std::future<StartDocumentTextDetectionOutcome> StartDocumentTextDetectionOutcomeCallable;
} // namespace Model

  class TextractClient;

    typedef std::function<void(const TextractClient*, const Model::AnalyzeDocumentRequest&, const Model::AnalyzeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AnalyzeDocumentResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::DetectDocumentTextRequest&, const Model::DetectDocumentTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDocumentTextResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetDocumentAnalysisRequest&, const Model::GetDocumentAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetDocumentTextDetectionRequest&, const Model::GetDocumentTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentTextDetectionResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartDocumentAnalysisRequest&, const Model::StartDocumentAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartDocumentTextDetectionRequest&, const Model::StartDocumentTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentTextDetectionResponseReceivedHandler;

  /**
   * <p>Amazon Textract detects and analyzes text in documents and converts it into
   * machine-readable text. This is the API reference documentation for Amazon
   * Textract.</p>
   */
  class AWS_TEXTRACT_API TextractClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TextractClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TextractClient();

        inline virtual const char* GetServiceClientName() const override { return "Textract"; }


        /**
         * <p>Analyzes an input document for relationships between detected items. </p>
         * <p>The types of information returned are as follows: </p> <ul> <li> <p>Words and
         * lines that are related to nearby lines and words. The related information is
         * returned in two <a>Block</a> objects each of type <code>KEY_VALUE_SET</code>: a
         * KEY Block object and a VALUE Block object. For example, <i>Name: Ana Silva
         * Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva
         * Carolina</i> is the value.</p> </li> <li> <p>Table and table cell data. A TABLE
         * Block object contains information about a detected table. A CELL Block object is
         * returned for each cell in a table.</p> </li> <li> <p>Selectable elements such as
         * checkboxes and radio buttons. A SELECTION_ELEMENT Block object contains
         * information about a selectable element.</p> </li> <li> <p>Lines and words of
         * text. A LINE Block object contains one or more WORD Block objects.</p> </li>
         * </ul> <p>You can choose which type of analysis to perform by specifying the
         * <code>FeatureTypes</code> list. </p> <p>The output is returned in a list of
         * <code>BLOCK</code> objects.</p> <p> <code>AnalyzeDocument</code> is a
         * synchronous operation. To analyze documents asynchronously, use
         * <a>StartDocumentAnalysis</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::AnalyzeDocumentOutcome AnalyzeDocument(const Model::AnalyzeDocumentRequest& request) const;

        /**
         * <p>Analyzes an input document for relationships between detected items. </p>
         * <p>The types of information returned are as follows: </p> <ul> <li> <p>Words and
         * lines that are related to nearby lines and words. The related information is
         * returned in two <a>Block</a> objects each of type <code>KEY_VALUE_SET</code>: a
         * KEY Block object and a VALUE Block object. For example, <i>Name: Ana Silva
         * Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva
         * Carolina</i> is the value.</p> </li> <li> <p>Table and table cell data. A TABLE
         * Block object contains information about a detected table. A CELL Block object is
         * returned for each cell in a table.</p> </li> <li> <p>Selectable elements such as
         * checkboxes and radio buttons. A SELECTION_ELEMENT Block object contains
         * information about a selectable element.</p> </li> <li> <p>Lines and words of
         * text. A LINE Block object contains one or more WORD Block objects.</p> </li>
         * </ul> <p>You can choose which type of analysis to perform by specifying the
         * <code>FeatureTypes</code> list. </p> <p>The output is returned in a list of
         * <code>BLOCK</code> objects.</p> <p> <code>AnalyzeDocument</code> is a
         * synchronous operation. To analyze documents asynchronously, use
         * <a>StartDocumentAnalysis</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AnalyzeDocumentOutcomeCallable AnalyzeDocumentCallable(const Model::AnalyzeDocumentRequest& request) const;

        /**
         * <p>Analyzes an input document for relationships between detected items. </p>
         * <p>The types of information returned are as follows: </p> <ul> <li> <p>Words and
         * lines that are related to nearby lines and words. The related information is
         * returned in two <a>Block</a> objects each of type <code>KEY_VALUE_SET</code>: a
         * KEY Block object and a VALUE Block object. For example, <i>Name: Ana Silva
         * Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva
         * Carolina</i> is the value.</p> </li> <li> <p>Table and table cell data. A TABLE
         * Block object contains information about a detected table. A CELL Block object is
         * returned for each cell in a table.</p> </li> <li> <p>Selectable elements such as
         * checkboxes and radio buttons. A SELECTION_ELEMENT Block object contains
         * information about a selectable element.</p> </li> <li> <p>Lines and words of
         * text. A LINE Block object contains one or more WORD Block objects.</p> </li>
         * </ul> <p>You can choose which type of analysis to perform by specifying the
         * <code>FeatureTypes</code> list. </p> <p>The output is returned in a list of
         * <code>BLOCK</code> objects.</p> <p> <code>AnalyzeDocument</code> is a
         * synchronous operation. To analyze documents asynchronously, use
         * <a>StartDocumentAnalysis</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AnalyzeDocumentAsync(const Model::AnalyzeDocumentRequest& request, const AnalyzeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects text in the input document. Amazon Textract can detect lines of text
         * and the words that make up a line of text. The input document must be an image
         * in JPG or PNG format. <code>DetectDocumentText</code> returns the detected text
         * in an array of <a>Block</a> objects. </p> <p>Each document page has as an
         * associated <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object
         * is the parent of LINE <code>Block</code> objects that represent the lines of
         * detected text on a page. A LINE <code>Block</code> object is a parent for each
         * word that makes up the line. Words are represented by <code>Block</code> objects
         * of type WORD.</p> <p> <code>DetectDocumentText</code> is a synchronous
         * operation. To analyze documents asynchronously, use
         * <a>StartDocumentTextDetection</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectDocumentText">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectDocumentTextOutcome DetectDocumentText(const Model::DetectDocumentTextRequest& request) const;

        /**
         * <p>Detects text in the input document. Amazon Textract can detect lines of text
         * and the words that make up a line of text. The input document must be an image
         * in JPG or PNG format. <code>DetectDocumentText</code> returns the detected text
         * in an array of <a>Block</a> objects. </p> <p>Each document page has as an
         * associated <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object
         * is the parent of LINE <code>Block</code> objects that represent the lines of
         * detected text on a page. A LINE <code>Block</code> object is a parent for each
         * word that makes up the line. Words are represented by <code>Block</code> objects
         * of type WORD.</p> <p> <code>DetectDocumentText</code> is a synchronous
         * operation. To analyze documents asynchronously, use
         * <a>StartDocumentTextDetection</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectDocumentText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectDocumentTextOutcomeCallable DetectDocumentTextCallable(const Model::DetectDocumentTextRequest& request) const;

        /**
         * <p>Detects text in the input document. Amazon Textract can detect lines of text
         * and the words that make up a line of text. The input document must be an image
         * in JPG or PNG format. <code>DetectDocumentText</code> returns the detected text
         * in an array of <a>Block</a> objects. </p> <p>Each document page has as an
         * associated <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object
         * is the parent of LINE <code>Block</code> objects that represent the lines of
         * detected text on a page. A LINE <code>Block</code> object is a parent for each
         * word that makes up the line. Words are represented by <code>Block</code> objects
         * of type WORD.</p> <p> <code>DetectDocumentText</code> is a synchronous
         * operation. To analyze documents asynchronously, use
         * <a>StartDocumentTextDetection</a>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectDocumentText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectDocumentTextAsync(const Model::DetectDocumentTextRequest& request, const DetectDocumentTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that analyzes
         * text in a document.</p> <p>You start asynchronous text analysis by calling
         * <a>StartDocumentAnalysis</a>, which returns a job identifier
         * (<code>JobId</code>). When the text analysis operation finishes, Amazon Textract
         * publishes a completion status to the Amazon Simple Notification Service (Amazon
         * SNS) topic that's registered in the initial call to
         * <code>StartDocumentAnalysis</code>. To get the results of the text-detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <code>GetDocumentAnalysis</code>, and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p> <code>GetDocumentAnalysis</code>
         * returns an array of <a>Block</a> objects. The following types of information are
         * returned: </p> <ul> <li> <p>Words and lines that are related to nearby lines and
         * words. The related information is returned in two <a>Block</a> objects each of
         * type <code>KEY_VALUE_SET</code>: a KEY Block object and a VALUE Block object.
         * For example, <i>Name: Ana Silva Carolina</i> contains a key and value.
         * <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the value.</p> </li> <li>
         * <p>Table and table cell data. A TABLE Block object contains information about a
         * detected table. A CELL Block object is returned for each cell in a table.</p>
         * </li> <li> <p>Selectable elements such as checkboxes and radio buttons. A
         * SELECTION_ELEMENT Block object contains information about a selectable
         * element.</p> </li> <li> <p>Lines and words of text. A LINE Block object contains
         * one or more WORD Block objects.</p> </li> </ul> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of blocks returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentAnalysis</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentAnalysisOutcome GetDocumentAnalysis(const Model::GetDocumentAnalysisRequest& request) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that analyzes
         * text in a document.</p> <p>You start asynchronous text analysis by calling
         * <a>StartDocumentAnalysis</a>, which returns a job identifier
         * (<code>JobId</code>). When the text analysis operation finishes, Amazon Textract
         * publishes a completion status to the Amazon Simple Notification Service (Amazon
         * SNS) topic that's registered in the initial call to
         * <code>StartDocumentAnalysis</code>. To get the results of the text-detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <code>GetDocumentAnalysis</code>, and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p> <code>GetDocumentAnalysis</code>
         * returns an array of <a>Block</a> objects. The following types of information are
         * returned: </p> <ul> <li> <p>Words and lines that are related to nearby lines and
         * words. The related information is returned in two <a>Block</a> objects each of
         * type <code>KEY_VALUE_SET</code>: a KEY Block object and a VALUE Block object.
         * For example, <i>Name: Ana Silva Carolina</i> contains a key and value.
         * <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the value.</p> </li> <li>
         * <p>Table and table cell data. A TABLE Block object contains information about a
         * detected table. A CELL Block object is returned for each cell in a table.</p>
         * </li> <li> <p>Selectable elements such as checkboxes and radio buttons. A
         * SELECTION_ELEMENT Block object contains information about a selectable
         * element.</p> </li> <li> <p>Lines and words of text. A LINE Block object contains
         * one or more WORD Block objects.</p> </li> </ul> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of blocks returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentAnalysis</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentAnalysis">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentAnalysisOutcomeCallable GetDocumentAnalysisCallable(const Model::GetDocumentAnalysisRequest& request) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that analyzes
         * text in a document.</p> <p>You start asynchronous text analysis by calling
         * <a>StartDocumentAnalysis</a>, which returns a job identifier
         * (<code>JobId</code>). When the text analysis operation finishes, Amazon Textract
         * publishes a completion status to the Amazon Simple Notification Service (Amazon
         * SNS) topic that's registered in the initial call to
         * <code>StartDocumentAnalysis</code>. To get the results of the text-detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <code>GetDocumentAnalysis</code>, and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p> <code>GetDocumentAnalysis</code>
         * returns an array of <a>Block</a> objects. The following types of information are
         * returned: </p> <ul> <li> <p>Words and lines that are related to nearby lines and
         * words. The related information is returned in two <a>Block</a> objects each of
         * type <code>KEY_VALUE_SET</code>: a KEY Block object and a VALUE Block object.
         * For example, <i>Name: Ana Silva Carolina</i> contains a key and value.
         * <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the value.</p> </li> <li>
         * <p>Table and table cell data. A TABLE Block object contains information about a
         * detected table. A CELL Block object is returned for each cell in a table.</p>
         * </li> <li> <p>Selectable elements such as checkboxes and radio buttons. A
         * SELECTION_ELEMENT Block object contains information about a selectable
         * element.</p> </li> <li> <p>Lines and words of text. A LINE Block object contains
         * one or more WORD Block objects.</p> </li> </ul> <p>Use the
         * <code>MaxResults</code> parameter to limit the number of blocks returned. If
         * there are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentAnalysis</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentAnalysis">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAnalysisAsync(const Model::GetDocumentAnalysisRequest& request, const GetDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that detects
         * text in a document. Amazon Textract can detect lines of text and the words that
         * make up a line of text.</p> <p>You start asynchronous text detection by calling
         * <a>StartDocumentTextDetection</a>, which returns a job identifier
         * (<code>JobId</code>). When the text detection operation finishes, Amazon
         * Textract publishes a completion status to the Amazon Simple Notification Service
         * (Amazon SNS) topic that's registered in the initial call to
         * <code>StartDocumentTextDetection</code>. To get the results of the
         * text-detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetDocumentTextDetection</code>, and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>
         * <code>GetDocumentTextDetection</code> returns an array of <a>Block</a> objects.
         * </p> <p>Each document page has as an associated <code>Block</code> of type PAGE.
         * Each PAGE <code>Block</code> object is the parent of LINE <code>Block</code>
         * objects that represent the lines of detected text on a page. A LINE
         * <code>Block</code> object is a parent for each word that makes up the line.
         * Words are represented by <code>Block</code> objects of type WORD.</p> <p>Use the
         * MaxResults parameter to limit the number of blocks that are returned. If there
         * are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentTextDetection</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentTextDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentTextDetectionOutcome GetDocumentTextDetection(const Model::GetDocumentTextDetectionRequest& request) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that detects
         * text in a document. Amazon Textract can detect lines of text and the words that
         * make up a line of text.</p> <p>You start asynchronous text detection by calling
         * <a>StartDocumentTextDetection</a>, which returns a job identifier
         * (<code>JobId</code>). When the text detection operation finishes, Amazon
         * Textract publishes a completion status to the Amazon Simple Notification Service
         * (Amazon SNS) topic that's registered in the initial call to
         * <code>StartDocumentTextDetection</code>. To get the results of the
         * text-detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetDocumentTextDetection</code>, and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>
         * <code>GetDocumentTextDetection</code> returns an array of <a>Block</a> objects.
         * </p> <p>Each document page has as an associated <code>Block</code> of type PAGE.
         * Each PAGE <code>Block</code> object is the parent of LINE <code>Block</code>
         * objects that represent the lines of detected text on a page. A LINE
         * <code>Block</code> object is a parent for each word that makes up the line.
         * Words are represented by <code>Block</code> objects of type WORD.</p> <p>Use the
         * MaxResults parameter to limit the number of blocks that are returned. If there
         * are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentTextDetection</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentTextDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentTextDetectionOutcomeCallable GetDocumentTextDetectionCallable(const Model::GetDocumentTextDetectionRequest& request) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that detects
         * text in a document. Amazon Textract can detect lines of text and the words that
         * make up a line of text.</p> <p>You start asynchronous text detection by calling
         * <a>StartDocumentTextDetection</a>, which returns a job identifier
         * (<code>JobId</code>). When the text detection operation finishes, Amazon
         * Textract publishes a completion status to the Amazon Simple Notification Service
         * (Amazon SNS) topic that's registered in the initial call to
         * <code>StartDocumentTextDetection</code>. To get the results of the
         * text-detection operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetDocumentTextDetection</code>, and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>
         * <code>GetDocumentTextDetection</code> returns an array of <a>Block</a> objects.
         * </p> <p>Each document page has as an associated <code>Block</code> of type PAGE.
         * Each PAGE <code>Block</code> object is the parent of LINE <code>Block</code>
         * objects that represent the lines of detected text on a page. A LINE
         * <code>Block</code> object is a parent for each word that makes up the line.
         * Words are represented by <code>Block</code> objects of type WORD.</p> <p>Use the
         * MaxResults parameter to limit the number of blocks that are returned. If there
         * are more results than specified in <code>MaxResults</code>, the value of
         * <code>NextToken</code> in the operation response contains a pagination token for
         * getting the next set of results. To get the next page of results, call
         * <code>GetDocumentTextDetection</code>, and populate the <code>NextToken</code>
         * request parameter with the token value that's returned from the previous call to
         * <code>GetDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentTextDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentTextDetectionAsync(const Model::GetDocumentTextDetectionRequest& request, const GetDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts asynchronous analysis of an input document for relationships between
         * detected items such as key and value pairs, tables, and selection elements.</p>
         * <p> <code>StartDocumentAnalysis</code> can analyze text in documents that are in
         * JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket. Use
         * <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartDocumentAnalysis</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * analysis is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text analysis
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentAnalysis</a>, and pass the
         * job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentAnalysisOutcome StartDocumentAnalysis(const Model::StartDocumentAnalysisRequest& request) const;

        /**
         * <p>Starts asynchronous analysis of an input document for relationships between
         * detected items such as key and value pairs, tables, and selection elements.</p>
         * <p> <code>StartDocumentAnalysis</code> can analyze text in documents that are in
         * JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket. Use
         * <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartDocumentAnalysis</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * analysis is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text analysis
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentAnalysis</a>, and pass the
         * job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentAnalysis">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentAnalysisOutcomeCallable StartDocumentAnalysisCallable(const Model::StartDocumentAnalysisRequest& request) const;

        /**
         * <p>Starts asynchronous analysis of an input document for relationships between
         * detected items such as key and value pairs, tables, and selection elements.</p>
         * <p> <code>StartDocumentAnalysis</code> can analyze text in documents that are in
         * JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket. Use
         * <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartDocumentAnalysis</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * analysis is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text analysis
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentAnalysis</a>, and pass the
         * job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentAnalysis">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDocumentAnalysisAsync(const Model::StartDocumentAnalysisRequest& request, const StartDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous detection of text in a document. Amazon Textract can
         * detect lines of text and the words that make up a line of text.</p> <p>
         * <code>StartDocumentTextDetection</code> can analyze text in documents that are
         * in JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket.
         * Use <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartTextDetection</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * detection is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentTextDetection</a>, and pass
         * the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentTextDetection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentTextDetectionOutcome StartDocumentTextDetection(const Model::StartDocumentTextDetectionRequest& request) const;

        /**
         * <p>Starts the asynchronous detection of text in a document. Amazon Textract can
         * detect lines of text and the words that make up a line of text.</p> <p>
         * <code>StartDocumentTextDetection</code> can analyze text in documents that are
         * in JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket.
         * Use <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartTextDetection</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * detection is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentTextDetection</a>, and pass
         * the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentTextDetection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentTextDetectionOutcomeCallable StartDocumentTextDetectionCallable(const Model::StartDocumentTextDetectionRequest& request) const;

        /**
         * <p>Starts the asynchronous detection of text in a document. Amazon Textract can
         * detect lines of text and the words that make up a line of text.</p> <p>
         * <code>StartDocumentTextDetection</code> can analyze text in documents that are
         * in JPG, PNG, and PDF format. The documents are stored in an Amazon S3 bucket.
         * Use <a>DocumentLocation</a> to specify the bucket name and file name of the
         * document. </p> <p> <code>StartTextDetection</code> returns a job identifier
         * (<code>JobId</code>) that you use to get the results of the operation. When text
         * detection is finished, Amazon Textract publishes a completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic that you specify in
         * <code>NotificationChannel</code>. To get the results of the text detection
         * operation, first check that the status value published to the Amazon SNS topic
         * is <code>SUCCEEDED</code>. If so, call <a>GetDocumentTextDetection</a>, and pass
         * the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartDocumentTextDetection</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentTextDetection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDocumentTextDetectionAsync(const Model::StartDocumentTextDetectionRequest& request, const StartDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AnalyzeDocumentAsyncHelper(const Model::AnalyzeDocumentRequest& request, const AnalyzeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectDocumentTextAsyncHelper(const Model::DetectDocumentTextRequest& request, const DetectDocumentTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentAnalysisAsyncHelper(const Model::GetDocumentAnalysisRequest& request, const GetDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentTextDetectionAsyncHelper(const Model::GetDocumentTextDetectionRequest& request, const GetDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDocumentAnalysisAsyncHelper(const Model::StartDocumentAnalysisRequest& request, const StartDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDocumentTextDetectionAsyncHelper(const Model::StartDocumentTextDetectionRequest& request, const StartDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Textract
} // namespace Aws
