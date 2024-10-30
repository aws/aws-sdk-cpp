/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeServiceRevisionsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeServiceRevisionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceRevisions"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the service revision. </p> <p>You can specify a maximum of 20
     * ARNs.</p> <p>You can call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServiceDeployments.html">ListServiceDeployments</a>
     * to get the ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceRevisionArns() const{ return m_serviceRevisionArns; }
    inline bool ServiceRevisionArnsHasBeenSet() const { return m_serviceRevisionArnsHasBeenSet; }
    inline void SetServiceRevisionArns(const Aws::Vector<Aws::String>& value) { m_serviceRevisionArnsHasBeenSet = true; m_serviceRevisionArns = value; }
    inline void SetServiceRevisionArns(Aws::Vector<Aws::String>&& value) { m_serviceRevisionArnsHasBeenSet = true; m_serviceRevisionArns = std::move(value); }
    inline DescribeServiceRevisionsRequest& WithServiceRevisionArns(const Aws::Vector<Aws::String>& value) { SetServiceRevisionArns(value); return *this;}
    inline DescribeServiceRevisionsRequest& WithServiceRevisionArns(Aws::Vector<Aws::String>&& value) { SetServiceRevisionArns(std::move(value)); return *this;}
    inline DescribeServiceRevisionsRequest& AddServiceRevisionArns(const Aws::String& value) { m_serviceRevisionArnsHasBeenSet = true; m_serviceRevisionArns.push_back(value); return *this; }
    inline DescribeServiceRevisionsRequest& AddServiceRevisionArns(Aws::String&& value) { m_serviceRevisionArnsHasBeenSet = true; m_serviceRevisionArns.push_back(std::move(value)); return *this; }
    inline DescribeServiceRevisionsRequest& AddServiceRevisionArns(const char* value) { m_serviceRevisionArnsHasBeenSet = true; m_serviceRevisionArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceRevisionArns;
    bool m_serviceRevisionArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
