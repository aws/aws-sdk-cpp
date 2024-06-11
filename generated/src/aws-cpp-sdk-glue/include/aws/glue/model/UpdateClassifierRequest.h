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
    AWS_GLUE_API UpdateClassifierRequest();

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
    inline const UpdateGrokClassifierRequest& GetGrokClassifier() const{ return m_grokClassifier; }
    inline bool GrokClassifierHasBeenSet() const { return m_grokClassifierHasBeenSet; }
    inline void SetGrokClassifier(const UpdateGrokClassifierRequest& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }
    inline void SetGrokClassifier(UpdateGrokClassifierRequest&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }
    inline UpdateClassifierRequest& WithGrokClassifier(const UpdateGrokClassifierRequest& value) { SetGrokClassifier(value); return *this;}
    inline UpdateClassifierRequest& WithGrokClassifier(UpdateGrokClassifierRequest&& value) { SetGrokClassifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>XMLClassifier</code> object with updated fields.</p>
     */
    inline const UpdateXMLClassifierRequest& GetXMLClassifier() const{ return m_xMLClassifier; }
    inline bool XMLClassifierHasBeenSet() const { return m_xMLClassifierHasBeenSet; }
    inline void SetXMLClassifier(const UpdateXMLClassifierRequest& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = value; }
    inline void SetXMLClassifier(UpdateXMLClassifierRequest&& value) { m_xMLClassifierHasBeenSet = true; m_xMLClassifier = std::move(value); }
    inline UpdateClassifierRequest& WithXMLClassifier(const UpdateXMLClassifierRequest& value) { SetXMLClassifier(value); return *this;}
    inline UpdateClassifierRequest& WithXMLClassifier(UpdateXMLClassifierRequest&& value) { SetXMLClassifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>JsonClassifier</code> object with updated fields.</p>
     */
    inline const UpdateJsonClassifierRequest& GetJsonClassifier() const{ return m_jsonClassifier; }
    inline bool JsonClassifierHasBeenSet() const { return m_jsonClassifierHasBeenSet; }
    inline void SetJsonClassifier(const UpdateJsonClassifierRequest& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = value; }
    inline void SetJsonClassifier(UpdateJsonClassifierRequest&& value) { m_jsonClassifierHasBeenSet = true; m_jsonClassifier = std::move(value); }
    inline UpdateClassifierRequest& WithJsonClassifier(const UpdateJsonClassifierRequest& value) { SetJsonClassifier(value); return *this;}
    inline UpdateClassifierRequest& WithJsonClassifier(UpdateJsonClassifierRequest&& value) { SetJsonClassifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CsvClassifier</code> object with updated fields.</p>
     */
    inline const UpdateCsvClassifierRequest& GetCsvClassifier() const{ return m_csvClassifier; }
    inline bool CsvClassifierHasBeenSet() const { return m_csvClassifierHasBeenSet; }
    inline void SetCsvClassifier(const UpdateCsvClassifierRequest& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = value; }
    inline void SetCsvClassifier(UpdateCsvClassifierRequest&& value) { m_csvClassifierHasBeenSet = true; m_csvClassifier = std::move(value); }
    inline UpdateClassifierRequest& WithCsvClassifier(const UpdateCsvClassifierRequest& value) { SetCsvClassifier(value); return *this;}
    inline UpdateClassifierRequest& WithCsvClassifier(UpdateCsvClassifierRequest&& value) { SetCsvClassifier(std::move(value)); return *this;}
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
