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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Root.h>
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
namespace Organizations
{
namespace Model
{
  class AWS_ORGANIZATIONS_API EnablePolicyTypeResult
  {
  public:
    EnablePolicyTypeResult();
    EnablePolicyTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnablePolicyTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline const Root& GetRoot() const{ return m_root; }

    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline void SetRoot(const Root& value) { m_root = value; }

    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline void SetRoot(Root&& value) { m_root = std::move(value); }

    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline EnablePolicyTypeResult& WithRoot(const Root& value) { SetRoot(value); return *this;}

    /**
     * <p>A structure that shows the root with the updated list of enabled policy
     * types.</p>
     */
    inline EnablePolicyTypeResult& WithRoot(Root&& value) { SetRoot(std::move(value)); return *this;}

  private:

    Root m_root;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
