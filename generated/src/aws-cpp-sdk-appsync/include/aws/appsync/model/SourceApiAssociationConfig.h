/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/MergeType.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes properties used to specify configurations related to a source
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/SourceApiAssociationConfig">AWS
   * API Reference</a></p>
   */
  class SourceApiAssociationConfig
  {
  public:
    AWS_APPSYNC_API SourceApiAssociationConfig();
    AWS_APPSYNC_API SourceApiAssociationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API SourceApiAssociationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline const MergeType& GetMergeType() const{ return m_mergeType; }

    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline bool MergeTypeHasBeenSet() const { return m_mergeTypeHasBeenSet; }

    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline void SetMergeType(const MergeType& value) { m_mergeTypeHasBeenSet = true; m_mergeType = value; }

    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline void SetMergeType(MergeType&& value) { m_mergeTypeHasBeenSet = true; m_mergeType = std::move(value); }

    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline SourceApiAssociationConfig& WithMergeType(const MergeType& value) { SetMergeType(value); return *this;}

    /**
     * <p>The property that indicates which merging option is enabled in the source API
     * association.</p> <p>Valid merge types are <code>MANUAL_MERGE</code> (default)
     * and <code>AUTO_MERGE</code>. Manual merges are the default behavior and require
     * the user to trigger any changes from the source APIs to the merged API manually.
     * Auto merges subscribe the merged API to the changes performed on the source APIs
     * so that any change in the source APIs are also made to the merged API. Auto
     * merges use <code>MergedApiExecutionRoleArn</code> to perform merge
     * operations.</p>
     */
    inline SourceApiAssociationConfig& WithMergeType(MergeType&& value) { SetMergeType(std::move(value)); return *this;}

  private:

    MergeType m_mergeType;
    bool m_mergeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
