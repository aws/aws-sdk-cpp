/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is an optional array within a BackupRule.</p> <p>IndexAction consists of
   * one ResourceTypes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/IndexAction">AWS
   * API Reference</a></p>
   */
  class IndexAction
  {
  public:
    AWS_BACKUP_API IndexAction() = default;
    AWS_BACKUP_API IndexAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API IndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>0 or 1 index action will be accepted for each BackupRule.</p> <p>Valid
     * values:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>S3</code> for Amazon Simple Storage Service (Amazon S3)</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    IndexAction& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    IndexAction& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
