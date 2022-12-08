/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateCreateMessageBody.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{
  class CreateInAppTemplateResult
  {
  public:
    AWS_PINPOINT_API CreateInAppTemplateResult();
    AWS_PINPOINT_API CreateInAppTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateInAppTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TemplateCreateMessageBody& GetTemplateCreateMessageBody() const{ return m_templateCreateMessageBody; }

    
    inline void SetTemplateCreateMessageBody(const TemplateCreateMessageBody& value) { m_templateCreateMessageBody = value; }

    
    inline void SetTemplateCreateMessageBody(TemplateCreateMessageBody&& value) { m_templateCreateMessageBody = std::move(value); }

    
    inline CreateInAppTemplateResult& WithTemplateCreateMessageBody(const TemplateCreateMessageBody& value) { SetTemplateCreateMessageBody(value); return *this;}

    
    inline CreateInAppTemplateResult& WithTemplateCreateMessageBody(TemplateCreateMessageBody&& value) { SetTemplateCreateMessageBody(std::move(value)); return *this;}

  private:

    TemplateCreateMessageBody m_templateCreateMessageBody;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
