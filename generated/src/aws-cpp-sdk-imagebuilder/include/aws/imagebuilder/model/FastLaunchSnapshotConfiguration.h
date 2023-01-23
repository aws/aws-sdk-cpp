/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Configuration settings for creating and managing pre-provisioned snapshots
   * for a fast-launch enabled Windows AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/FastLaunchSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class FastLaunchSnapshotConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API FastLaunchSnapshotConfiguration();
    AWS_IMAGEBUILDER_API FastLaunchSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API FastLaunchSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of pre-provisioned snapshots to keep on hand for a fast-launch
     * enabled Windows AMI.</p>
     */
    inline int GetTargetResourceCount() const{ return m_targetResourceCount; }

    /**
     * <p>The number of pre-provisioned snapshots to keep on hand for a fast-launch
     * enabled Windows AMI.</p>
     */
    inline bool TargetResourceCountHasBeenSet() const { return m_targetResourceCountHasBeenSet; }

    /**
     * <p>The number of pre-provisioned snapshots to keep on hand for a fast-launch
     * enabled Windows AMI.</p>
     */
    inline void SetTargetResourceCount(int value) { m_targetResourceCountHasBeenSet = true; m_targetResourceCount = value; }

    /**
     * <p>The number of pre-provisioned snapshots to keep on hand for a fast-launch
     * enabled Windows AMI.</p>
     */
    inline FastLaunchSnapshotConfiguration& WithTargetResourceCount(int value) { SetTargetResourceCount(value); return *this;}

  private:

    int m_targetResourceCount;
    bool m_targetResourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
