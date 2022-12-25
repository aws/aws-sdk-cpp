/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/StatusType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Specifies filters when retrieving batch builds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildBatchFilter">AWS
   * API Reference</a></p>
   */
  class BuildBatchFilter
  {
  public:
    AWS_CODEBUILD_API BuildBatchFilter();
    AWS_CODEBUILD_API BuildBatchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildBatchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline BuildBatchFilter& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch builds to retrieve. Only batch builds that have this
     * status will be retrieved.</p>
     */
    inline BuildBatchFilter& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    StatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
