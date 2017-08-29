/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDefaultVersionDescription.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API UpdateDocumentDefaultVersionResult
  {
  public:
    UpdateDocumentDefaultVersionResult();
    UpdateDocumentDefaultVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDocumentDefaultVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline const DocumentDefaultVersionDescription& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline void SetDescription(const DocumentDefaultVersionDescription& value) { m_description = value; }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline void SetDescription(DocumentDefaultVersionDescription&& value) { m_description = std::move(value); }

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline UpdateDocumentDefaultVersionResult& WithDescription(const DocumentDefaultVersionDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a custom document that you want to set as the default
     * version.</p>
     */
    inline UpdateDocumentDefaultVersionResult& WithDescription(DocumentDefaultVersionDescription&& value) { SetDescription(std::move(value)); return *this;}

  private:

    DocumentDefaultVersionDescription m_description;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
