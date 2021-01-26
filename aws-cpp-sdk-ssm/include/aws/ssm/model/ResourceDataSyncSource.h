/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncAwsOrganizationsSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the source of the data included in the resource data
   * sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncSource">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceDataSyncSource
  {
  public:
    ResourceDataSyncSource();
    ResourceDataSyncSource(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataSyncSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSource& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSource& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in AWS
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline ResourceDataSyncSource& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline const ResourceDataSyncAwsOrganizationsSource& GetAwsOrganizationsSource() const{ return m_awsOrganizationsSource; }

    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline bool AwsOrganizationsSourceHasBeenSet() const { return m_awsOrganizationsSourceHasBeenSet; }

    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline void SetAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = value; }

    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline void SetAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = std::move(value); }

    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline ResourceDataSyncSource& WithAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { SetAwsOrganizationsSource(value); return *this;}

    /**
     * <p>Information about the AwsOrganizationsSource resource data sync source. A
     * sync source of this type can synchronize data from AWS Organizations.</p>
     */
    inline ResourceDataSyncSource& WithAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { SetAwsOrganizationsSource(std::move(value)); return *this;}


    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const{ return m_sourceRegions; }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline void SetSourceRegions(const Aws::Vector<Aws::String>& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = value; }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline void SetSourceRegions(Aws::Vector<Aws::String>&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::move(value); }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline ResourceDataSyncSource& WithSourceRegions(const Aws::Vector<Aws::String>& value) { SetSourceRegions(value); return *this;}

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline ResourceDataSyncSource& WithSourceRegions(Aws::Vector<Aws::String>&& value) { SetSourceRegions(std::move(value)); return *this;}

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline ResourceDataSyncSource& AddSourceRegions(const Aws::String& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline ResourceDataSyncSource& AddSourceRegions(Aws::String&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>SyncSource</code> AWS Regions included in the resource data
     * sync.</p>
     */
    inline ResourceDataSyncSource& AddSourceRegions(const char* value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }


    /**
     * <p>Whether to automatically synchronize and aggregate data from new AWS Regions
     * when those Regions come online.</p>
     */
    inline bool GetIncludeFutureRegions() const{ return m_includeFutureRegions; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new AWS Regions
     * when those Regions come online.</p>
     */
    inline bool IncludeFutureRegionsHasBeenSet() const { return m_includeFutureRegionsHasBeenSet; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new AWS Regions
     * when those Regions come online.</p>
     */
    inline void SetIncludeFutureRegions(bool value) { m_includeFutureRegionsHasBeenSet = true; m_includeFutureRegions = value; }

    /**
     * <p>Whether to automatically synchronize and aggregate data from new AWS Regions
     * when those Regions come online.</p>
     */
    inline ResourceDataSyncSource& WithIncludeFutureRegions(bool value) { SetIncludeFutureRegions(value); return *this;}

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    ResourceDataSyncAwsOrganizationsSource m_awsOrganizationsSource;
    bool m_awsOrganizationsSourceHasBeenSet;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet;

    bool m_includeFutureRegions;
    bool m_includeFutureRegionsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
