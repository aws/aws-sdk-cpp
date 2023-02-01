/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListLabelGroupsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLabelGroups"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline const Aws::String& GetLabelGroupNameBeginsWith() const{ return m_labelGroupNameBeginsWith; }

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline bool LabelGroupNameBeginsWithHasBeenSet() const { return m_labelGroupNameBeginsWithHasBeenSet; }

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline void SetLabelGroupNameBeginsWith(const Aws::String& value) { m_labelGroupNameBeginsWithHasBeenSet = true; m_labelGroupNameBeginsWith = value; }

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline void SetLabelGroupNameBeginsWith(Aws::String&& value) { m_labelGroupNameBeginsWithHasBeenSet = true; m_labelGroupNameBeginsWith = std::move(value); }

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline void SetLabelGroupNameBeginsWith(const char* value) { m_labelGroupNameBeginsWithHasBeenSet = true; m_labelGroupNameBeginsWith.assign(value); }

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline ListLabelGroupsRequest& WithLabelGroupNameBeginsWith(const Aws::String& value) { SetLabelGroupNameBeginsWith(value); return *this;}

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline ListLabelGroupsRequest& WithLabelGroupNameBeginsWith(Aws::String&& value) { SetLabelGroupNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p> The beginning of the name of the label groups to be listed. </p>
     */
    inline ListLabelGroupsRequest& WithLabelGroupNameBeginsWith(const char* value) { SetLabelGroupNameBeginsWith(value); return *this;}


    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies the maximum number of label groups to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of label groups to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of label groups to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of label groups to list. </p>
     */
    inline ListLabelGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_labelGroupNameBeginsWith;
    bool m_labelGroupNameBeginsWithHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
