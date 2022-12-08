/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/RelatedItemsUpdate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class UpdateRelatedItemsRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateRelatedItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelatedItems"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateRelatedItemsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateRelatedItemsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline UpdateRelatedItemsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline UpdateRelatedItemsRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline UpdateRelatedItemsRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident record containing the related
     * items you are updating.</p>
     */
    inline UpdateRelatedItemsRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}


    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline const RelatedItemsUpdate& GetRelatedItemsUpdate() const{ return m_relatedItemsUpdate; }

    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline bool RelatedItemsUpdateHasBeenSet() const { return m_relatedItemsUpdateHasBeenSet; }

    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline void SetRelatedItemsUpdate(const RelatedItemsUpdate& value) { m_relatedItemsUpdateHasBeenSet = true; m_relatedItemsUpdate = value; }

    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline void SetRelatedItemsUpdate(RelatedItemsUpdate&& value) { m_relatedItemsUpdateHasBeenSet = true; m_relatedItemsUpdate = std::move(value); }

    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline UpdateRelatedItemsRequest& WithRelatedItemsUpdate(const RelatedItemsUpdate& value) { SetRelatedItemsUpdate(value); return *this;}

    /**
     * <p>Details about the item you are adding or deleting.</p>
     */
    inline UpdateRelatedItemsRequest& WithRelatedItemsUpdate(RelatedItemsUpdate&& value) { SetRelatedItemsUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;

    RelatedItemsUpdate m_relatedItemsUpdate;
    bool m_relatedItemsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
