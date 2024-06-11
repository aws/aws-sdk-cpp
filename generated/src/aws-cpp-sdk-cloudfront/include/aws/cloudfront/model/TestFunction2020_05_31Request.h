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
    AWS_CLOUDFRONT_API TestFunction2020_05_31Request();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TestFunction2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TestFunction2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TestFunction2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * testing, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline TestFunction2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline TestFunction2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline TestFunction2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the function that you are testing, either
     * <code>DEVELOPMENT</code> or <code>LIVE</code>.</p>
     */
    inline const FunctionStage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const FunctionStage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(FunctionStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline TestFunction2020_05_31Request& WithStage(const FunctionStage& value) { SetStage(value); return *this;}
    inline TestFunction2020_05_31Request& WithStage(FunctionStage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event object to test the function with. For more information about the
     * structure of the event object, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/managing-functions.html#test-function">Testing
     * functions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetEventObject() const{ return m_eventObject; }
    inline bool EventObjectHasBeenSet() const { return m_eventObjectHasBeenSet; }
    inline void SetEventObject(const Aws::Utils::CryptoBuffer& value) { m_eventObjectHasBeenSet = true; m_eventObject = value; }
    inline void SetEventObject(Aws::Utils::CryptoBuffer&& value) { m_eventObjectHasBeenSet = true; m_eventObject = std::move(value); }
    inline TestFunction2020_05_31Request& WithEventObject(const Aws::Utils::CryptoBuffer& value) { SetEventObject(value); return *this;}
    inline TestFunction2020_05_31Request& WithEventObject(Aws::Utils::CryptoBuffer&& value) { SetEventObject(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    FunctionStage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_eventObject;
    bool m_eventObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
