/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * format.</p> <p>You can use the standard classifiers that Glue provides, or you
   * can write your own classifiers to best categorize your data sources and specify
   * the appropriate schemas to use for them. A classifier can be a <code>grok</code>
   * classifier, an <code>XML</code> classifier, a <code>JSON</code> classifier, or a
   * custom <code>CSV</code> classifier, as specified in one of the fields in the
   * <code>Classifier</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Classifier">AWS API
   * Reference</a></p>
   */
  class Classifier
  {
  public:
    AWS_GLUE_API Classifier() = default;
    AWS_GLUE_API Classifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Classifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A classifier that uses <code>grok</code>.</p>
     */
    inline const GrokClassifier& GetGrokClassifier() const { return m_grokClassifier; }
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }
    template<typename GrokClassifierT = GrokClassifier>
    void SetGrokClassifier(GrokClassifierT&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::forward<GrokClassifierT>(value); }
    template<typename GrokClassifierT = GrokClassifier>
    Classifier& WithGrokClassifier(GrokClassifierT&& value) { SetGrokClassifier(std::forward<GrokClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A classifier for XML content.</p>
     */
    inline const XMLClassifier& GetXMLClassifier() const { return m_xMLClassifier; }
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }
    template<typename XMLClassifierT = XMLClassifier>
    void SetXMLClassifier(XMLClassifierT&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::forward<XMLClassifierT>(value); }
    template<typename XMLClassifierT = XMLClassifier>
    Classifier& WithXMLClassifier(XMLClassifierT&& value) { SetXMLClassifier(std::forward<XMLClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A classifier for JSON content.</p>
     */
    inline const JsonClassifier& GetJsonClassifier() const { return m_jsonClassifier; }
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }
    template<typename JsonClassifierT = JsonClassifier>
    void SetJsonClassifier(JsonClassifierT&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::forward<JsonClassifierT>(value); }
    template<typename JsonClassifierT = JsonClassifier>
    Classifier& WithJsonClassifier(JsonClassifierT&& value) { SetJsonClassifier(std::forward<JsonClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A classifier for comma-separated values (CSV).</p>
     */
    inline const CsvClassifier& GetCsvClassifier() const { return m_csvClassifier; }
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }
    template<typename CsvClassifierT = CsvClassifier>
    void SetCsvClassifier(CsvClassifierT&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::forward<CsvClassifierT>(value); }
    template<typename CsvClassifierT = CsvClassifier>
    Classifier& WithCsvClassifier(CsvClassifierT&& value) { SetCsvClassifier(std::forward<CsvClassifierT>(value)); return *this;}
    ///@}
  private:

    GrokClassifier m_grokClassifier;
    bool m_grokClassifierHasBeenSet = false;

    XMLClassifier m_xMLClassifier;
    bool m_xMLClassifierHasBeenSet = false;

    JsonClassifier m_jsonClassifier;
    bool m_jsonClassifierHasBeenSet = false;

    CsvClassifier m_csvClassifier;
    bool m_csvClassifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
