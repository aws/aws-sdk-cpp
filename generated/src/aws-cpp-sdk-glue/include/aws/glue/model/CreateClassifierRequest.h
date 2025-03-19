/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/CreateGrokClassifierRequest.h>
#include <aws/glue/model/CreateXMLClassifierRequest.h>
#include <aws/glue/model/CreateJsonClassifierRequest.h>
#include <aws/glue/model/CreateCsvClassifierRequest.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateClassifierRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateClassifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClassifier"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A <code>GrokClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateGrokClassifierRequest& GetGrokClassifier() const { return m_grokClassifier; }
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }
    template<typename GrokClassifierT = CreateGrokClassifierRequest>
    void SetGrokClassifier(GrokClassifierT&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::forward<GrokClassifierT>(value); }
    template<typename GrokClassifierT = CreateGrokClassifierRequest>
    CreateClassifierRequest& WithGrokClassifier(GrokClassifierT&& value) { SetGrokClassifier(std::forward<GrokClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>XMLClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateXMLClassifierRequest& GetXMLClassifier() const { return m_xMLClassifier; }
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }
    template<typename XMLClassifierT = CreateXMLClassifierRequest>
    void SetXMLClassifier(XMLClassifierT&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::forward<XMLClassifierT>(value); }
    template<typename XMLClassifierT = CreateXMLClassifierRequest>
    CreateClassifierRequest& WithXMLClassifier(XMLClassifierT&& value) { SetXMLClassifier(std::forward<XMLClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>JsonClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateJsonClassifierRequest& GetJsonClassifier() const { return m_jsonClassifier; }
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }
    template<typename JsonClassifierT = CreateJsonClassifierRequest>
    void SetJsonClassifier(JsonClassifierT&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::forward<JsonClassifierT>(value); }
    template<typename JsonClassifierT = CreateJsonClassifierRequest>
    CreateClassifierRequest& WithJsonClassifier(JsonClassifierT&& value) { SetJsonClassifier(std::forward<JsonClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CsvClassifier</code> object specifying the classifier to create.</p>
     */
    inline const CreateCsvClassifierRequest& GetCsvClassifier() const { return m_csvClassifier; }
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }
    template<typename CsvClassifierT = CreateCsvClassifierRequest>
    void SetCsvClassifier(CsvClassifierT&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::forward<CsvClassifierT>(value); }
    template<typename CsvClassifierT = CreateCsvClassifierRequest>
    CreateClassifierRequest& WithCsvClassifier(CsvClassifierT&& value) { SetCsvClassifier(std::forward<CsvClassifierT>(value)); return *this;}
    ///@}
  private:

    CreateGrokClassifierRequest m_grokClassifier;
    bool m_grokClassifierHasBeenSet = false;

    CreateXMLClassifierRequest m_xMLClassifier;
    bool m_xMLClassifierHasBeenSet = false;

    CreateJsonClassifierRequest m_jsonClassifier;
    bool m_jsonClassifierHasBeenSet = false;

    CreateCsvClassifierRequest m_csvClassifier;
    bool m_csvClassifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
