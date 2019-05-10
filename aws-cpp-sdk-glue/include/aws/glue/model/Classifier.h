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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/GrokClassifier.h>
#include <aws/glue/model/XMLClassifier.h>
#include <aws/glue/model/JsonClassifier.h>
#include <aws/glue/model/CsvClassifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Classifiers are triggered during a crawl task. A classifier checks whether a
   * given file is in a format it can handle. If it is, the classifier creates a
   * schema in the form of a <code>StructType</code> object that matches that data
   * format.</p> <p>You can use the standard classifiers that AWS Glue provides, or
   * you can write your own classifiers to best categorize your data sources and
   * specify the appropriate schemas to use for them. A classifier can be a
   * <code>grok</code> classifier, an <code>XML</code> classifier, a
   * <code>JSON</code> classifier, or a custom <code>CSV</code> classifier, as
   * specified in one of the fields in the <code>Classifier</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Classifier">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Classifier
  {
  public:
    Classifier();
    Classifier(Aws::Utils::Json::JsonView jsonValue);
    Classifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline const GrokClassifier& GetGrokClassifier() const{ return m_grokClassifier; }

    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }

    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline void SetGrokClassifier(const GrokClassifier& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }

    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline void SetGrokClassifier(GrokClassifier&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }

    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline Classifier& WithGrokClassifier(const GrokClassifier& value) { SetGrokClassifier(value); return *this;}

    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline Classifier& WithGrokClassifier(GrokClassifier&& value) { SetGrokClassifier(std::move(value)); return *this;}


    /**
     * <p>A classifier for XML content.</p>
     */
    inline const XMLClassifier& GetXMLClassifier() const{ return m_xMLClassifier; }

    /**
     * <p>A classifier for XML content.</p>
     */
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }

    /**
     * <p>A classifier for XML content.</p>
     */
    inline void SetXMLClassifier(const XMLClassifier& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = value; }

    /**
     * <p>A classifier for XML content.</p>
     */
    inline void SetXMLClassifier(XMLClassifier&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::move(value); }

    /**
     * <p>A classifier for XML content.</p>
     */
    inline Classifier& WithXMLClassifier(const XMLClassifier& value) { SetXMLClassifier(value); return *this;}

    /**
     * <p>A classifier for XML content.</p>
     */
    inline Classifier& WithXMLClassifier(XMLClassifier&& value) { SetXMLClassifier(std::move(value)); return *this;}


    /**
     * <p>A classifier for JSON content.</p>
     */
    inline const JsonClassifier& GetJsonClassifier() const{ return m_jsonClassifier; }

    /**
     * <p>A classifier for JSON content.</p>
     */
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }

    /**
     * <p>A classifier for JSON content.</p>
     */
    inline void SetJsonClassifier(const JsonClassifier& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = value; }

    /**
     * <p>A classifier for JSON content.</p>
     */
    inline void SetJsonClassifier(JsonClassifier&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::move(value); }

    /**
     * <p>A classifier for JSON content.</p>
     */
    inline Classifier& WithJsonClassifier(const JsonClassifier& value) { SetJsonClassifier(value); return *this;}

    /**
     * <p>A classifier for JSON content.</p>
     */
    inline Classifier& WithJsonClassifier(JsonClassifier&& value) { SetJsonClassifier(std::move(value)); return *this;}


    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline const CsvClassifier& GetCsvClassifier() const{ return m_csvClassifier; }

    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }

    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline void SetCsvClassifier(const CsvClassifier& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = value; }

    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline void SetCsvClassifier(CsvClassifier&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::move(value); }

    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline Classifier& WithCsvClassifier(const CsvClassifier& value) { SetCsvClassifier(value); return *this;}

    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline Classifier& WithCsvClassifier(CsvClassifier&& value) { SetCsvClassifier(std::move(value)); return *this;}

  private:

    GrokClassifier m_grokClassifier;
    bool m_grokClassifierHasBeenSet;

    XMLClassifier m_xMLClassifier;
    bool m_xMLClassifierHasBeenSet;

    JsonClassifier m_jsonClassifier;
    bool m_jsonClassifierHasBeenSet;

    CsvClassifier m_csvClassifier;
    bool m_csvClassifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
