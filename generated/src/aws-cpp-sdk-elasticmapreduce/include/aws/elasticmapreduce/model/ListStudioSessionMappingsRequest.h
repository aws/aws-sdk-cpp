/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/IdentityType.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class ListStudioSessionMappingsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListStudioSessionMappingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStudioSessionMappings"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline ListStudioSessionMappingsRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline ListStudioSessionMappingsRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline ListStudioSessionMappingsRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline ListStudioSessionMappingsRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>Specifies whether to return session mappings for users or groups. If not
     * specified, the results include session mapping details for both users and
     * groups.</p>
     */
    inline ListStudioSessionMappingsRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline ListStudioSessionMappingsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline ListStudioSessionMappingsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the set of results to retrieve.</p>
     */
    inline ListStudioSessionMappingsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
