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
    AWS_FSX_API ActiveDirectoryBackupAttributes() = default;
    AWS_FSX_API ActiveDirectoryBackupAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ActiveDirectoryBackupAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified domain name of the self-managed Active Directory
     * directory.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ActiveDirectoryBackupAttributes& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Managed Microsoft Active Directory instance
     * to which the file system is joined.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const { return m_activeDirectoryId; }
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }
    template<typename ActiveDirectoryIdT = Aws::String>
    void SetActiveDirectoryId(ActiveDirectoryIdT&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::forward<ActiveDirectoryIdT>(value); }
    template<typename ActiveDirectoryIdT = Aws::String>
    ActiveDirectoryBackupAttributes& WithActiveDirectoryId(ActiveDirectoryIdT&& value) { SetActiveDirectoryId(std::forward<ActiveDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    ActiveDirectoryBackupAttributes& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
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
