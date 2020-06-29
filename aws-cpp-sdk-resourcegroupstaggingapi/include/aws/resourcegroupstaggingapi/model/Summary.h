/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/TargetIdType.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>A count of noncompliant resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/Summary">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API Summary
  {
  public:
    Summary();
    Summary(Aws::Utils::Json::JsonView jsonValue);
    Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline const Aws::String& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline void SetLastUpdated(const Aws::String& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline void SetLastUpdated(Aws::String&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline void SetLastUpdated(const char* value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated.assign(value); }

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline Summary& WithLastUpdated(const Aws::String& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline Summary& WithLastUpdated(Aws::String&& value) { SetLastUpdated(std::move(value)); return *this;}

    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline Summary& WithLastUpdated(const char* value) { SetLastUpdated(value); return *this;}


    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline Summary& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline Summary& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline Summary& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline const TargetIdType& GetTargetIdType() const{ return m_targetIdType; }

    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline bool TargetIdTypeHasBeenSet() const { return m_targetIdTypeHasBeenSet; }

    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline void SetTargetIdType(const TargetIdType& value) { m_targetIdTypeHasBeenSet = true; m_targetIdType = value; }

    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline void SetTargetIdType(TargetIdType&& value) { m_targetIdTypeHasBeenSet = true; m_targetIdType = std::move(value); }

    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline Summary& WithTargetIdType(const TargetIdType& value) { SetTargetIdType(value); return *this;}

    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline Summary& WithTargetIdType(TargetIdType&& value) { SetTargetIdType(std::move(value)); return *this;}


    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline Summary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline Summary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region that the summary applies to.</p>
     */
    inline Summary& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The AWS resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The AWS resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The AWS resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The AWS resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The AWS resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The AWS resource type.</p>
     */
    inline Summary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The AWS resource type.</p>
     */
    inline Summary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The AWS resource type.</p>
     */
    inline Summary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The count of noncompliant resources.</p>
     */
    inline long long GetNonCompliantResources() const{ return m_nonCompliantResources; }

    /**
     * <p>The count of noncompliant resources.</p>
     */
    inline bool NonCompliantResourcesHasBeenSet() const { return m_nonCompliantResourcesHasBeenSet; }

    /**
     * <p>The count of noncompliant resources.</p>
     */
    inline void SetNonCompliantResources(long long value) { m_nonCompliantResourcesHasBeenSet = true; m_nonCompliantResources = value; }

    /**
     * <p>The count of noncompliant resources.</p>
     */
    inline Summary& WithNonCompliantResources(long long value) { SetNonCompliantResources(value); return *this;}

  private:

    Aws::String m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    TargetIdType m_targetIdType;
    bool m_targetIdTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    long long m_nonCompliantResources;
    bool m_nonCompliantResourcesHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
