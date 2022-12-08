/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/ServiceLimit.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>An error indicating that a particular service limit was exceeded. You can
   * increase some service limits by contacting Amazon Web Services
   * Support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ServiceLimitExceeded">AWS
   * API Reference</a></p>
   */
  class ServiceLimitExceeded
  {
  public:
    AWS_FSX_API ServiceLimitExceeded();
    AWS_FSX_API ServiceLimitExceeded(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ServiceLimitExceeded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline const ServiceLimit& GetLimit() const{ return m_limit; }

    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline void SetLimit(const ServiceLimit& value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline void SetLimit(ServiceLimit&& value) { m_limitHasBeenSet = true; m_limit = std::move(value); }

    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline ServiceLimitExceeded& WithLimit(const ServiceLimit& value) { SetLimit(value); return *this;}

    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline ServiceLimitExceeded& WithLimit(ServiceLimit&& value) { SetLimit(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceLimitExceeded& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceLimitExceeded& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceLimitExceeded& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ServiceLimit m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
