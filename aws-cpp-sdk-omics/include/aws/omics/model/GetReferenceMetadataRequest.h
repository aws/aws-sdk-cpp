/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class GetReferenceMetadataRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetReferenceMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReferenceMetadata"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The reference's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reference's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = value; }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::move(value); }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId.assign(value); }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataRequest& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataRequest& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataRequest& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
