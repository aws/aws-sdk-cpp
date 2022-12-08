/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Describes the settings for the subdomain. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/SubDomainSetting">AWS
   * API Reference</a></p>
   */
  class SubDomainSetting
  {
  public:
    AWS_AMPLIFY_API SubDomainSetting();
    AWS_AMPLIFY_API SubDomainSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API SubDomainSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p> The prefix setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> The branch name setting for the subdomain. </p>
     */
    inline SubDomainSetting& WithBranchName(const char* value) { SetBranchName(value); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
