/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The Amazon Resource Name (ARN) is already associated with the
   * OpsItem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemRelatedItemAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class OpsItemRelatedItemAlreadyExistsException
  {
  public:
    AWS_SSM_API OpsItemRelatedItemAlreadyExistsException();
    AWS_SSM_API OpsItemRelatedItemAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemRelatedItemAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline OpsItemRelatedItemAlreadyExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceUri() const{ return m_resourceUri; }

    
    inline bool ResourceUriHasBeenSet() const { return m_resourceUriHasBeenSet; }

    
    inline void SetResourceUri(const Aws::String& value) { m_resourceUriHasBeenSet = true; m_resourceUri = value; }

    
    inline void SetResourceUri(Aws::String&& value) { m_resourceUriHasBeenSet = true; m_resourceUri = std::move(value); }

    
    inline void SetResourceUri(const char* value) { m_resourceUriHasBeenSet = true; m_resourceUri.assign(value); }

    
    inline OpsItemRelatedItemAlreadyExistsException& WithResourceUri(const Aws::String& value) { SetResourceUri(value); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithResourceUri(Aws::String&& value) { SetResourceUri(std::move(value)); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithResourceUri(const char* value) { SetResourceUri(value); return *this;}


    
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    
    inline OpsItemRelatedItemAlreadyExistsException& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    
    inline OpsItemRelatedItemAlreadyExistsException& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceUri;
    bool m_resourceUriHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
