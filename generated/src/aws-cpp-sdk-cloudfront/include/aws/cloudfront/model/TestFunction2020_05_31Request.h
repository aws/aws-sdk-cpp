/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class TestFunction2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API TestFunction2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestFunction"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the function that you are testing.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TestFunction2020_05_31Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * testing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    TestFunction2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the function that you are testing, either
     * <code>DEVELOPMENT</code> or <code>LIVE</code>.</p>
     */
    inline FunctionStage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(FunctionStage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline TestFunction2020_05_31Request& WithStage(FunctionStage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event object to test the function with. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/managing-functions.html#test-function">Testing
     * functions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetEventObject() const { return m_eventObject; }
    inline bool EventObjectHasBeenSet() const { return m_eventObjectHasBeenSet; }
    template<typename EventObjectT = Aws::Utils::CryptoBuffer>
    void SetEventObject(EventObjectT&& value) { m_eventObjectHasBeenSet = true; m_eventObject = std::forward<EventObjectT>(value); }
    template<typename EventObjectT = Aws::Utils::CryptoBuffer>
    TestFunction2020_05_31Request& WithEventObject(EventObjectT&& value) { SetEventObject(std::forward<EventObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    FunctionStage m_stage{FunctionStage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_eventObject{};
    bool m_eventObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
