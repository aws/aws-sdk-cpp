/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class StopMetricStreamsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API StopMetricStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopMetricStreams"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline StopMetricStreamsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline StopMetricStreamsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline StopMetricStreamsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline StopMetricStreamsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of the names of metric streams to stop streaming.</p> <p>This is an
     * "all or nothing" operation. If you do not have permission to access all of the
     * metric streams that you list here, then none of the streams that you list in the
     * operation will stop streaming.</p>
     */
    inline StopMetricStreamsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
