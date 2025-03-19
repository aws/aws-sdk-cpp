/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/UpdateGrokClassifierRequest.h>
#include <aws/glue/model/UpdateXMLClassifierRequest.h>
#include <aws/glue/model/UpdateJsonClassifierRequest.h>
#include <aws/glue/model/UpdateCsvClassifierRequest.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateClassifierRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateClassifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClassifier"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A <code>GrokClassifier</code> object with updated fields.</p>
     */
    inline const UpdateGrokClassifierRequest& GetGrokClassifier() const { return m_grokClassifier; }
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }
    template<typename GrokClassifierT = UpdateGrokClassifierRequest>
    void SetGrokClassifier(GrokClassifierT&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::forward<GrokClassifierT>(value); }
    template<typename GrokClassifierT = UpdateGrokClassifierRequest>
    UpdateClassifierRequest& WithGrokClassifier(GrokClassifierT&& value) { SetGrokClassifier(std::forward<GrokClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>XMLClassifier</code> object with updated fields.</p>
     */
    inline const UpdateXMLClassifierRequest& GetXMLClassifier() const { return m_xMLClassifier; }
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }
    template<typename XMLClassifierT = UpdateXMLClassifierRequest>
    void SetXMLClassifier(XMLClassifierT&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::forward<XMLClassifierT>(value); }
    template<typename XMLClassifierT = UpdateXMLClassifierRequest>
    UpdateClassifierRequest& WithXMLClassifier(XMLClassifierT&& value) { SetXMLClassifier(std::forward<XMLClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>JsonClassifier</code> object with updated fields.</p>
     */
    inline const UpdateJsonClassifierRequest& GetJsonClassifier() const { return m_jsonClassifier; }
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }
    template<typename JsonClassifierT = UpdateJsonClassifierRequest>
    void SetJsonClassifier(JsonClassifierT&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::forward<JsonClassifierT>(value); }
    template<typename JsonClassifierT = UpdateJsonClassifierRequest>
    UpdateClassifierRequest& WithJsonClassifier(JsonClassifierT&& value) { SetJsonClassifier(std::forward<JsonClassifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CsvClassifier</code> object with updated fields.</p>
     */
    inline const UpdateCsvClassifierRequest& GetCsvClassifier() const { return m_csvClassifier; }
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }
    template<typename CsvClassifierT = UpdateCsvClassifierRequest>
    void SetCsvClassifier(CsvClassifierT&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::forward<CsvClassifierT>(value); }
    template<typename CsvClassifierT = UpdateCsvClassifierRequest>
    UpdateClassifierRequest& WithCsvClassifier(CsvClassifierT&& value) { SetCsvClassifier(std::forward<CsvClassifierT>(value)); return *this;}
    ///@}
  private:

    UpdateGrokClassifierRequest m_grokClassifier;
    bool m_grokClassifierHasBeenSet = false;

    UpdateXMLClassifierRequest m_xMLClassifier;
    bool m_xMLClassifierHasBeenSet = false;

    UpdateJsonClassifierRequest m_jsonClassifier;
    bool m_jsonClassifierHasBeenSet = false;

    UpdateCsvClassifierRequest m_csvClassifier;
    bool m_csvClassifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
