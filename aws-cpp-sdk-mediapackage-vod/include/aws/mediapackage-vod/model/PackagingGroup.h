/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/PackagingGroup">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API PackagingGroup
  {
  public:
    PackagingGroup();
    PackagingGroup(Aws::Utils::Json::JsonView jsonValue);
    PackagingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the PackagingGroup.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the PackagingGroup.
     */
    inline PackagingGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline PackagingGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the PackagingGroup.
     */
    inline PackagingGroup& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }

    
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }

    
    inline void SetAuthorization(const Authorization& value) { m_authorizationHasBeenSet = true; m_authorization = value; }

    
    inline void SetAuthorization(Authorization&& value) { m_authorizationHasBeenSet = true; m_authorization = std::move(value); }

    
    inline PackagingGroup& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}

    
    inline PackagingGroup& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}


    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline PackagingGroup& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline PackagingGroup& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline PackagingGroup& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingGroup.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline PackagingGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline PackagingGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline PackagingGroup& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline PackagingGroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline PackagingGroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline PackagingGroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline PackagingGroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline PackagingGroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline PackagingGroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline PackagingGroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline PackagingGroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline PackagingGroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Authorization m_authorization;
    bool m_authorizationHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
