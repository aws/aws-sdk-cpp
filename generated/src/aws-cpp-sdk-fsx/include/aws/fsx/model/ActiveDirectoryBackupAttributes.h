/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The Microsoft Active Directory attributes of the Amazon FSx for Windows File
   * Server file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ActiveDirectoryBackupAttributes">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryBackupAttributes
  {
  public:
    AWS_FSX_API ActiveDirectoryBackupAttributes();
    AWS_FSX_API ActiveDirectoryBackupAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ActiveDirectoryBackupAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified domain name of the self-managed Active Directory
     * directory.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ActiveDirectoryBackupAttributes& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ActiveDirectoryBackupAttributes& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ActiveDirectoryBackupAttributes& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Managed Microsoft Active Directory instance
     * to which the file system is joined.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const{ return m_activeDirectoryId; }
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }
    inline void SetActiveDirectoryId(const Aws::String& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = value; }
    inline void SetActiveDirectoryId(Aws::String&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::move(value); }
    inline void SetActiveDirectoryId(const char* value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId.assign(value); }
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(const Aws::String& value) { SetActiveDirectoryId(value); return *this;}
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(Aws::String&& value) { SetActiveDirectoryId(std::move(value)); return *this;}
    inline ActiveDirectoryBackupAttributes& WithActiveDirectoryId(const char* value) { SetActiveDirectoryId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline ActiveDirectoryBackupAttributes& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline ActiveDirectoryBackupAttributes& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline ActiveDirectoryBackupAttributes& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
