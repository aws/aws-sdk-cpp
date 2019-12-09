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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Template.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API DescribeTemplateResult
  {
  public:
    DescribeTemplateResult();
    DescribeTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The template structure for the object you want to describe.</p>
     */
    inline const Template& GetTemplate() const{ return m_template; }

    /**
     * <p>The template structure for the object you want to describe.</p>
     */
    inline void SetTemplate(const Template& value) { m_template = value; }

    /**
     * <p>The template structure for the object you want to describe.</p>
     */
    inline void SetTemplate(Template&& value) { m_template = std::move(value); }

    /**
     * <p>The template structure for the object you want to describe.</p>
     */
    inline DescribeTemplateResult& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template structure for the object you want to describe.</p>
     */
    inline DescribeTemplateResult& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeTemplateResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Template m_template;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
