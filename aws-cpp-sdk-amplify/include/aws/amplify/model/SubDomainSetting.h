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
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Setting for the Subdomain. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/SubDomainSetting">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API SubDomainSetting
  {
  public:
    SubDomainSetting();
    SubDomainSetting(Aws::Utils::Json::JsonView jsonValue);
    SubDomainSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p> Prefix setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Branch name setting for the Subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(const char* value) { SetBranchName(value); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
