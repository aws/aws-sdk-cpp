/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DeleteImportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteImport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline DeleteImportRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline DeleteImportRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the import to delete.</p>
     */
    inline DeleteImportRequest& WithImportId(const char* value) { SetImportId(value); return *this;}

  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
