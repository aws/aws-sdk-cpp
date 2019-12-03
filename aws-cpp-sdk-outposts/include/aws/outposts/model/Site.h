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
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about a site.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Site">AWS API
   * Reference</a></p>
   */
  class AWS_OUTPOSTS_API Site
  {
  public:
    Site();
    Site(Aws::Utils::Json::JsonView jsonValue);
    Site& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    
    inline Site& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    
    inline Site& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    
    inline Site& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline Site& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline Site& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline Site& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Site& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Site& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Site& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Site& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Site& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Site& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
