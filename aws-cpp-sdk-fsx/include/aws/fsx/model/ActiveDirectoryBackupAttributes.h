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
#include <aws/fsx/FSx_EXPORTS.h>
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
   * <p>The Microsoft AD attributes of the Amazon FSx for Windows File Server file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ActiveDirectoryBackupAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API ActiveDirectoryBackupAttributes
  {
  public:
    ActiveDirectoryBackupAttributes();
    ActiveDirectoryBackupAttributes(Aws::Utils::Json::JsonView jsonValue);
    ActiveDirectoryBackupAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name of the self-managed AD directory.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const{ return m_activeDirectoryId; }

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline void SetActiveDirectoryId(const Aws::String& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = value; }

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline void SetActiveDirectoryId(Aws::String&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::move(value); }

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline void SetActiveDirectoryId(const char* value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId.assign(value); }

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(const Aws::String& value) { SetActiveDirectoryId(value); return *this;}

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(Aws::String&& value) { SetActiveDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Managed Microsoft Active Directory instance to which the
     * file system is joined.</p>
     */
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(const char* value) { SetActiveDirectoryId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
