/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Returned if the specified file system does not have a replication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ReplicationNotFound">AWS
   * API Reference</a></p>
   */
  class ReplicationNotFound
  {
  public:
    AWS_EFS_API ReplicationNotFound();
    AWS_EFS_API ReplicationNotFound(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API ReplicationNotFound& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ReplicationNotFound</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>ReplicationNotFound</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>ReplicationNotFound</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>ReplicationNotFound</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>ReplicationNotFound</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>ReplicationNotFound</p>
     */
    inline ReplicationNotFound& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>ReplicationNotFound</p>
     */
    inline ReplicationNotFound& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>ReplicationNotFound</p>
     */
    inline ReplicationNotFound& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ReplicationNotFound& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ReplicationNotFound& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ReplicationNotFound& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
