/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>This error indicates that you are calling an embedding operation in Amazon
   * QuickSight without the required pricing plan on your AWS account. Before you can
   * use anonymous embedding, a QuickSight administrator needs to add capacity
   * pricing to QuickSight. You can do this on the <b>Manage QuickSight</b> page.
   * </p> <p>After capacity pricing is added, you can enable anonymous embedding by
   * using the <code> <a>GetDashboardEmbedUrl</a> </code> API operation with the
   * <code>--identity-type ANONYMOUS</code> option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UnsupportedPricingPlanException">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API UnsupportedPricingPlanException
  {
  public:
    UnsupportedPricingPlanException();
    UnsupportedPricingPlanException(Aws::Utils::Json::JsonView jsonValue);
    UnsupportedPricingPlanException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnsupportedPricingPlanException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnsupportedPricingPlanException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnsupportedPricingPlanException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline UnsupportedPricingPlanException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline UnsupportedPricingPlanException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this request.</p>
     */
    inline UnsupportedPricingPlanException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
