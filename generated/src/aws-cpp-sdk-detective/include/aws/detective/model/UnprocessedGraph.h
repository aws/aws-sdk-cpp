/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Behavior graphs that could not be processed in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UnprocessedGraph">AWS
   * API Reference</a></p>
   */
  class UnprocessedGraph
  {
  public:
    AWS_DETECTIVE_API UnprocessedGraph();
    AWS_DETECTIVE_API UnprocessedGraph(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API UnprocessedGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }
    inline UnprocessedGraph& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}
    inline UnprocessedGraph& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}
    inline UnprocessedGraph& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason data source package information could not be processed for a
     * behavior graph.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline UnprocessedGraph& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline UnprocessedGraph& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline UnprocessedGraph& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
