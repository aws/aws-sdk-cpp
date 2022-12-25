/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>The resource you are attempting to create already exists.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ResourceAlreadyExistsFault">AWS
   * API Reference</a></p>
   */
  class ResourceAlreadyExistsFault
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ResourceAlreadyExistsFault();
    AWS_DATABASEMIGRATIONSERVICE_API ResourceAlreadyExistsFault(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ResourceAlreadyExistsFault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p/>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p/>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p/>
     */
    inline ResourceAlreadyExistsFault& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceAlreadyExistsFault& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ResourceAlreadyExistsFault& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    
    inline ResourceAlreadyExistsFault& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    
    inline ResourceAlreadyExistsFault& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    
    inline ResourceAlreadyExistsFault& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
