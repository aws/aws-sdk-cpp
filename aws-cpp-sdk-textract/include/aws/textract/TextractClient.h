/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/textract/TextractServiceClientModel.h>

namespace Aws
{
namespace Textract
{
  /**
   * <p>Amazon Textract detects and analyzes text in documents and converts it into
   * machine-readable text. This is the API reference documentation for Amazon
   * Textract.</p>
   */
  class AWS_TEXTRACT_API TextractClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TextractClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Textract::TextractClientConfiguration& clientConfiguration = Aws::Textract::TextractClientConfiguration(),
                       std::shared_ptr<TextractEndpointProviderBase> endpointProvider = Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<TextractEndpointProviderBase> endpointProvider = Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Textract::TextractClientConfiguration& clientConfiguration = Aws::Textract::TextractClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TextractClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<TextractEndpointProviderBase> endpointProvider = Aws::MakeShared<TextractEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Textract::TextractClientConfiguration& clientConfiguration = Aws::Textract::TextractClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TextractClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TextractClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TextractClient();

        /**
         * <p>Analyzes an input document for relationships between detected items. </p>
         * <p>The types of information returned are as follows: </p> <ul> <li> <p>Form data
         * (key-value pairs). The related information is returned in two <a>Block</a>
         * objects, each of type <code>KEY_VALUE_SET</code>: a KEY <code>Block</code>
         * object and a VALUE <code>Block</code> object. For example, <i>Name: Ana Silva
         * Carolina</i> contains a key and value. <i>Name:</i> is the key. <i>Ana Silva
         * Carolina</i> is the value.</p> </li> <li> <p>Table and table cell data. A TABLE
         * <code>Block</code> object contains information about a detected table. A CELL
         * <code>Block</code> object is returned for each cell in a table.</p> </li> <li>
         * <p>Lines and words of text. A LINE <code>Block</code> object contains one or
         * more WORD <code>Block</code> objects. All lines and words that are detected in
         * the document are returned (including text that doesn't have a relationship with
         * the value of <code>FeatureTypes</code>). </p> </li> <li> <p>Signatures. A
         * SIGNATURE <code>Block</code> object contains the location information of a
         * signature in a document. If used in conjunction with forms or tables, a
         * signature can be given a Key-Value pairing or be detected in the cell of a
         * table.</p> </li> <li> <p>Query. A QUERY Block object contains the query text,
         * alias and link to the associated Query results block object.</p> </li> <li>
         * <p>Query Result. A QUERY_RESULT Block object contains the answer to the query
         * and an ID that connects it to the query asked. This Block also contains a
         * confidence score.</p> </li> </ul> <p>Selection elements such as check boxes and
         * option buttons (radio buttons) can be detected in form data and in tables. A
         * SELECTION_ELEMENT <code>Block</code> object contains information about a
         * selection element, including the selection status.</p> <p>You can choose which
         * type of analysis to perform by specifying the <code>FeatureTypes</code> list.
         * </p> <p>The output is returned in a list of <code>Block</code> objects.</p> <p>
         * <code>AnalyzeDocument</code> is a synchronous operation. To analyze documents
         * asynchronously, use <a>StartDocumentAnalysis</a>.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::AnalyzeDocumentOutcome AnalyzeDocument(const Model::AnalyzeDocumentRequest& request) const;

        /**
         * A Callable wrapper for AnalyzeDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AnalyzeDocumentOutcomeCallable AnalyzeDocumentCallable(const Model::AnalyzeDocumentRequest& request) const;

        /**
         * An Async wrapper for AnalyzeDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AnalyzeDocumentAsync(const Model::AnalyzeDocumentRequest& request, const AnalyzeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>AnalyzeExpense</code> synchronously analyzes an input document for
         * financially related relationships between text.</p> <p>Information is returned
         * as <code>ExpenseDocuments</code> and seperated as follows:</p> <ul> <li> <p>
         * <code>LineItemGroups</code>- A data set containing <code>LineItems</code> which
         * store information about the lines of text, such as an item purchased and its
         * price on a receipt.</p> </li> <li> <p> <code>SummaryFields</code>- Contains all
         * other information a receipt, such as header information or the vendors name.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeExpense">AWS
         * API Reference</a></p>
         */
        virtual Model::AnalyzeExpenseOutcome AnalyzeExpense(const Model::AnalyzeExpenseRequest& request) const;

        /**
         * A Callable wrapper for AnalyzeExpense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AnalyzeExpenseOutcomeCallable AnalyzeExpenseCallable(const Model::AnalyzeExpenseRequest& request) const;

        /**
         * An Async wrapper for AnalyzeExpense that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AnalyzeExpenseAsync(const Model::AnalyzeExpenseRequest& request, const AnalyzeExpenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Analyzes identity documents for relevant information. This information is
         * extracted and returned as <code>IdentityDocumentFields</code>, which records
         * both the normalized field and value of the extracted text.Unlike other Amazon
         * Textract operations, <code>AnalyzeID</code> doesn't return any Geometry
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeID">AWS
         * API Reference</a></p>
         */
        virtual Model::AnalyzeIDOutcome AnalyzeID(const Model::AnalyzeIDRequest& request) const;

        /**
         * A Callable wrapper for AnalyzeID that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AnalyzeIDOutcomeCallable AnalyzeIDCallable(const Model::AnalyzeIDRequest& request) const;

        /**
         * An Async wrapper for AnalyzeID that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AnalyzeIDAsync(const Model::AnalyzeIDRequest& request, const AnalyzeIDResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects text in the input document. Amazon Textract can detect lines of text
         * and the words that make up a line of text. The input document must be in one of
         * the following image formats: JPEG, PNG, PDF, or TIFF.
         * <code>DetectDocumentText</code> returns the detected text in an array of
         * <a>Block</a> objects. </p> <p>Each document page has as an associated
         * <code>Block</code> of type PAGE. Each PAGE <code>Block</code> object is the
         * parent of LINE <code>Block</code> objects that represent the lines of detected
         * text on a page. A LINE <code>Block</code> object is a parent for each word that
         * makes up the line. Words are represented by <code>Block</code> objects of type
         * WORD.</p> <p> <code>DetectDocumentText</code> is a synchronous operation. To
         * analyze documents asynchronously, use <a>StartDocumentTextDetection</a>.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-detecting.html">Document
         * Text Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectDocumentText">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectDocumentTextOutcome DetectDocumentText(const Model::DetectDocumentTextRequest& request) const;

        /**
         * A Callable wrapper for DetectDocumentText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectDocumentTextOutcomeCallable DetectDocumentTextCallable(const Model::DetectDocumentTextRequest& request) const;

        /**
         * An Async wrapper for DetectDocumentText that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * returned: </p> <ul> <li> <p>Form data (key-value pairs). The related information
         * is returned in two <a>Block</a> objects, each of type
         * <code>KEY_VALUE_SET</code>: a KEY <code>Block</code> object and a VALUE
         * <code>Block</code> object. For example, <i>Name: Ana Silva Carolina</i> contains
         * a key and value. <i>Name:</i> is the key. <i>Ana Silva Carolina</i> is the
         * value.</p> </li> <li> <p>Table and table cell data. A TABLE <code>Block</code>
         * object contains information about a detected table. A CELL <code>Block</code>
         * object is returned for each cell in a table.</p> </li> <li> <p>Lines and words
         * of text. A LINE <code>Block</code> object contains one or more WORD
         * <code>Block</code> objects. All lines and words that are detected in the
         * document are returned (including text that doesn't have a relationship with the
         * value of the <code>StartDocumentAnalysis</code> <code>FeatureTypes</code> input
         * parameter). </p> </li> <li> <p>Query. A QUERY Block object contains the query
         * text, alias and link to the associated Query results block object.</p> </li>
         * <li> <p>Query Results. A QUERY_RESULT Block object contains the answer to the
         * query and an ID that connects it to the query asked. This Block also contains a
         * confidence score.</p> </li> </ul>  <p>While processing a document with
         * queries, look out for <code>INVALID_REQUEST_PARAMETERS</code> output. This
         * indicates that either the per page query limit has been exceeded or that the
         * operation is trying to query a page in the document which doesn’t exist. </p>
         *  <p>Selection elements such as check boxes and option buttons (radio
         * buttons) can be detected in form data and in tables. A SELECTION_ELEMENT
         * <code>Block</code> object contains information about a selection element,
         * including the selection status.</p> <p>Use the <code>MaxResults</code> parameter
         * to limit the number of blocks that are returned. If there are more results than
         * specified in <code>MaxResults</code>, the value of <code>NextToken</code> in the
         * operation response contains a pagination token for getting the next set of
         * results. To get the next page of results, call <code>GetDocumentAnalysis</code>,
         * and populate the <code>NextToken</code> request parameter with the token value
         * that's returned from the previous call to <code>GetDocumentAnalysis</code>.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetDocumentAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentAnalysisOutcome GetDocumentAnalysis(const Model::GetDocumentAnalysisRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentAnalysisOutcomeCallable GetDocumentAnalysisCallable(const Model::GetDocumentAnalysisRequest& request) const;

        /**
         * An Async wrapper for GetDocumentAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetDocumentTextDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentTextDetectionOutcomeCallable GetDocumentTextDetectionCallable(const Model::GetDocumentTextDetectionRequest& request) const;

        /**
         * An Async wrapper for GetDocumentTextDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentTextDetectionAsync(const Model::GetDocumentTextDetectionRequest& request, const GetDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that analyzes
         * invoices and receipts. Amazon Textract finds contact information, items
         * purchased, and vendor name, from input invoices and receipts.</p> <p>You start
         * asynchronous invoice/receipt analysis by calling <a>StartExpenseAnalysis</a>,
         * which returns a job identifier (<code>JobId</code>). Upon completion of the
         * invoice/receipt analysis, Amazon Textract publishes the completion status to the
         * Amazon Simple Notification Service (Amazon SNS) topic. This topic must be
         * registered in the initial call to <code>StartExpenseAnalysis</code>. To get the
         * results of the invoice/receipt analysis operation, first ensure that the status
         * value published to the Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <code>GetExpenseAnalysis</code>, and pass the job identifier
         * (<code>JobId</code>) from the initial call to
         * <code>StartExpenseAnalysis</code>.</p> <p>Use the MaxResults parameter to limit
         * the number of blocks that are returned. If there are more results than specified
         * in <code>MaxResults</code>, the value of <code>NextToken</code> in the operation
         * response contains a pagination token for getting the next set of results. To get
         * the next page of results, call <code>GetExpenseAnalysis</code>, and populate the
         * <code>NextToken</code> request parameter with the token value that's returned
         * from the previous call to <code>GetExpenseAnalysis</code>.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/invoices-receipts.html">Analyzing
         * Invoices and Receipts</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetExpenseAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExpenseAnalysisOutcome GetExpenseAnalysis(const Model::GetExpenseAnalysisRequest& request) const;

        /**
         * A Callable wrapper for GetExpenseAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExpenseAnalysisOutcomeCallable GetExpenseAnalysisCallable(const Model::GetExpenseAnalysisRequest& request) const;

        /**
         * An Async wrapper for GetExpenseAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExpenseAnalysisAsync(const Model::GetExpenseAnalysisRequest& request, const GetExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the results for an Amazon Textract asynchronous operation that analyzes
         * text in a lending document. </p> <p>You start asynchronous text analysis by
         * calling <code>StartLendingAnalysis</code>, which returns a job identifier
         * (<code>JobId</code>). When the text analysis operation finishes, Amazon Textract
         * publishes a completion status to the Amazon Simple Notification Service (Amazon
         * SNS) topic that's registered in the initial call to
         * <code>StartLendingAnalysis</code>. </p> <p>To get the results of the text
         * analysis operation, first check that the status value published to the Amazon
         * SNS topic is SUCCEEDED. If so, call GetLendingAnalysis, and pass the job
         * identifier (<code>JobId</code>) from the initial call to
         * <code>StartLendingAnalysis</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetLendingAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLendingAnalysisOutcome GetLendingAnalysis(const Model::GetLendingAnalysisRequest& request) const;

        /**
         * A Callable wrapper for GetLendingAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLendingAnalysisOutcomeCallable GetLendingAnalysisCallable(const Model::GetLendingAnalysisRequest& request) const;

        /**
         * An Async wrapper for GetLendingAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLendingAnalysisAsync(const Model::GetLendingAnalysisRequest& request, const GetLendingAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summarized results for the <code>StartLendingAnalysis</code> operation,
         * which analyzes text in a lending document. The returned summary consists of
         * information about documents grouped together by a common document type.
         * Information like detected signatures, page numbers, and split documents is
         * returned with respect to the type of grouped document. </p> <p>You start
         * asynchronous text analysis by calling <code>StartLendingAnalysis</code>, which
         * returns a job identifier (<code>JobId</code>). When the text analysis operation
         * finishes, Amazon Textract publishes a completion status to the Amazon Simple
         * Notification Service (Amazon SNS) topic that's registered in the initial call to
         * <code>StartLendingAnalysis</code>. </p> <p>To get the results of the text
         * analysis operation, first check that the status value published to the Amazon
         * SNS topic is SUCCEEDED. If so, call <code>GetLendingAnalysisSummary</code>, and
         * pass the job identifier (<code>JobId</code>) from the initial call to
         * <code>StartLendingAnalysis</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/GetLendingAnalysisSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLendingAnalysisSummaryOutcome GetLendingAnalysisSummary(const Model::GetLendingAnalysisSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetLendingAnalysisSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLendingAnalysisSummaryOutcomeCallable GetLendingAnalysisSummaryCallable(const Model::GetLendingAnalysisSummaryRequest& request) const;

        /**
         * An Async wrapper for GetLendingAnalysisSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLendingAnalysisSummaryAsync(const Model::GetLendingAnalysisSummaryRequest& request, const GetLendingAnalysisSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous analysis of an input document for relationships
         * between detected items such as key-value pairs, tables, and selection
         * elements.</p> <p> <code>StartDocumentAnalysis</code> can analyze text in
         * documents that are in JPEG, PNG, TIFF, and PDF format. The documents are stored
         * in an Amazon S3 bucket. Use <a>DocumentLocation</a> to specify the bucket name
         * and file name of the document. </p> <p> <code>StartDocumentAnalysis</code>
         * returns a job identifier (<code>JobId</code>) that you use to get the results of
         * the operation. When text analysis is finished, Amazon Textract publishes a
         * completion status to the Amazon Simple Notification Service (Amazon SNS) topic
         * that you specify in <code>NotificationChannel</code>. To get the results of the
         * text analysis operation, first check that the status value published to the
         * Amazon SNS topic is <code>SUCCEEDED</code>. If so, call
         * <a>GetDocumentAnalysis</a>, and pass the job identifier (<code>JobId</code>)
         * from the initial call to <code>StartDocumentAnalysis</code>.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/how-it-works-analyzing.html">Document
         * Text Analysis</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartDocumentAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDocumentAnalysisOutcome StartDocumentAnalysis(const Model::StartDocumentAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartDocumentAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentAnalysisOutcomeCallable StartDocumentAnalysisCallable(const Model::StartDocumentAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartDocumentAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDocumentAnalysisAsync(const Model::StartDocumentAnalysisRequest& request, const StartDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous detection of text in a document. Amazon Textract can
         * detect lines of text and the words that make up a line of text.</p> <p>
         * <code>StartDocumentTextDetection</code> can analyze text in documents that are
         * in JPEG, PNG, TIFF, and PDF format. The documents are stored in an Amazon S3
         * bucket. Use <a>DocumentLocation</a> to specify the bucket name and file name of
         * the document. </p> <p> <code>StartTextDetection</code> returns a job identifier
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
         * A Callable wrapper for StartDocumentTextDetection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDocumentTextDetectionOutcomeCallable StartDocumentTextDetectionCallable(const Model::StartDocumentTextDetectionRequest& request) const;

        /**
         * An Async wrapper for StartDocumentTextDetection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDocumentTextDetectionAsync(const Model::StartDocumentTextDetectionRequest& request, const StartDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the asynchronous analysis of invoices or receipts for data like
         * contact information, items purchased, and vendor names.</p> <p>
         * <code>StartExpenseAnalysis</code> can analyze text in documents that are in
         * JPEG, PNG, and PDF format. The documents must be stored in an Amazon S3 bucket.
         * Use the <a>DocumentLocation</a> parameter to specify the name of your S3 bucket
         * and the name of the document in that bucket. </p> <p>
         * <code>StartExpenseAnalysis</code> returns a job identifier (<code>JobId</code>)
         * that you will provide to <code>GetExpenseAnalysis</code> to retrieve the results
         * of the operation. When the analysis of the input invoices/receipts is finished,
         * Amazon Textract publishes a completion status to the Amazon Simple Notification
         * Service (Amazon SNS) topic that you provide to the
         * <code>NotificationChannel</code>. To obtain the results of the invoice and
         * receipt analysis operation, ensure that the status value published to the Amazon
         * SNS topic is <code>SUCCEEDED</code>. If so, call <a>GetExpenseAnalysis</a>, and
         * pass the job identifier (<code>JobId</code>) that was returned by your call to
         * <code>StartExpenseAnalysis</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/textract/latest/dg/invoice-receipts.html">Analyzing
         * Invoices and Receipts</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartExpenseAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExpenseAnalysisOutcome StartExpenseAnalysis(const Model::StartExpenseAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartExpenseAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExpenseAnalysisOutcomeCallable StartExpenseAnalysisCallable(const Model::StartExpenseAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartExpenseAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExpenseAnalysisAsync(const Model::StartExpenseAnalysisRequest& request, const StartExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the classification and analysis of an input document.
         * <code>StartLendingAnalysis</code> initiates the classification and analysis of a
         * packet of lending documents. <code>StartLendingAnalysis</code> operates on a
         * document file located in an Amazon S3 bucket.</p> <p>
         * <code>StartLendingAnalysis</code> can analyze text in documents that are in one
         * of the following formats: JPEG, PNG, TIFF, PDF. Use
         * <code>DocumentLocation</code> to specify the bucket name and the file name of
         * the document. </p> <p> <code>StartLendingAnalysis</code> returns a job
         * identifier (<code>JobId</code>) that you use to get the results of the
         * operation. When the text analysis is finished, Amazon Textract publishes a
         * completion status to the Amazon Simple Notification Service (Amazon SNS) topic
         * that you specify in <code>NotificationChannel</code>. To get the results of the
         * text analysis operation, first check that the status value published to the
         * Amazon SNS topic is SUCCEEDED. If the status is SUCCEEDED you can call either
         * <code>GetLendingAnalysis</code> or <code>GetLendingAnalysisSummary</code> and
         * provide the <code>JobId</code> to obtain the results of the analysis.</p> <p>If
         * using <code>OutputConfig</code> to specify an Amazon S3 bucket, the output will
         * be contained within the specified prefix in a directory labeled with the job-id.
         * In the directory there are 3 sub-directories: </p> <ul> <li> <p>detailedResponse
         * (contains the GetLendingAnalysis response)</p> </li> <li> <p>summaryResponse
         * (for the GetLendingAnalysisSummary response)</p> </li> <li> <p>splitDocuments
         * (documents split across logical boundaries)</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/StartLendingAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLendingAnalysisOutcome StartLendingAnalysis(const Model::StartLendingAnalysisRequest& request) const;

        /**
         * A Callable wrapper for StartLendingAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLendingAnalysisOutcomeCallable StartLendingAnalysisCallable(const Model::StartLendingAnalysisRequest& request) const;

        /**
         * An Async wrapper for StartLendingAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLendingAnalysisAsync(const Model::StartLendingAnalysisRequest& request, const StartLendingAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TextractEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TextractClient>;
      void init(const TextractClientConfiguration& clientConfiguration);

      TextractClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TextractEndpointProviderBase> m_endpointProvider;
  };

} // namespace Textract
} // namespace Aws
