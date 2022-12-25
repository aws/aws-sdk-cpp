/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>You get this exception when you call <code>CreateReturnShippingLabel</code>
   * more than once when other requests are not completed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_SNOWBALL_API ConflictException();
    AWS_SNOWBALL_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline const Aws::String& GetConflictResource() const{ return m_conflictResource; }

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline bool ConflictResourceHasBeenSet() const { return m_conflictResourceHasBeenSet; }

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline void SetConflictResource(const Aws::String& value) { m_conflictResourceHasBeenSet = true; m_conflictResource = value; }

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline void SetConflictResource(Aws::String&& value) { m_conflictResourceHasBeenSet = true; m_conflictResource = std::move(value); }

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline void SetConflictResource(const char* value) { m_conflictResourceHasBeenSet = true; m_conflictResource.assign(value); }

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline ConflictException& WithConflictResource(const Aws::String& value) { SetConflictResource(value); return *this;}

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline ConflictException& WithConflictResource(Aws::String&& value) { SetConflictResource(std::move(value)); return *this;}

    /**
     * <p>You get this resource when you call <code>CreateReturnShippingLabel</code>
     * more than once when other requests are not completed. .</p>
     */
    inline ConflictException& WithConflictResource(const char* value) { SetConflictResource(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_conflictResource;
    bool m_conflictResourceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
