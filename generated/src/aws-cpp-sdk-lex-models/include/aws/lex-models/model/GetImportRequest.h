/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class GetImportRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImport"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline GetImportRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline GetImportRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the import job information to return.</p>
     */
    inline GetImportRequest& WithImportId(const char* value) { SetImportId(value); return *this;}

  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
