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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  class AWS_IOTEVENTS_API TagrisSweepListItem
  {
  public:
    TagrisSweepListItem();
    TagrisSweepListItem(Aws::Utils::Json::JsonView jsonValue);
    TagrisSweepListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTagrisAccountId() const{ return m_tagrisAccountId; }

    
    inline bool TagrisAccountIdHasBeenSet() const { return m_tagrisAccountIdHasBeenSet; }

    
    inline void SetTagrisAccountId(const Aws::String& value) { m_tagrisAccountIdHasBeenSet = true; m_tagrisAccountId = value; }

    
    inline void SetTagrisAccountId(Aws::String&& value) { m_tagrisAccountIdHasBeenSet = true; m_tagrisAccountId = std::move(value); }

    
    inline void SetTagrisAccountId(const char* value) { m_tagrisAccountIdHasBeenSet = true; m_tagrisAccountId.assign(value); }

    
    inline TagrisSweepListItem& WithTagrisAccountId(const Aws::String& value) { SetTagrisAccountId(value); return *this;}

    
    inline TagrisSweepListItem& WithTagrisAccountId(Aws::String&& value) { SetTagrisAccountId(std::move(value)); return *this;}

    
    inline TagrisSweepListItem& WithTagrisAccountId(const char* value) { SetTagrisAccountId(value); return *this;}


    
    inline const Aws::String& GetTagrisAmazonResourceName() const{ return m_tagrisAmazonResourceName; }

    
    inline bool TagrisAmazonResourceNameHasBeenSet() const { return m_tagrisAmazonResourceNameHasBeenSet; }

    
    inline void SetTagrisAmazonResourceName(const Aws::String& value) { m_tagrisAmazonResourceNameHasBeenSet = true; m_tagrisAmazonResourceName = value; }

    
    inline void SetTagrisAmazonResourceName(Aws::String&& value) { m_tagrisAmazonResourceNameHasBeenSet = true; m_tagrisAmazonResourceName = std::move(value); }

    
    inline void SetTagrisAmazonResourceName(const char* value) { m_tagrisAmazonResourceNameHasBeenSet = true; m_tagrisAmazonResourceName.assign(value); }

    
    inline TagrisSweepListItem& WithTagrisAmazonResourceName(const Aws::String& value) { SetTagrisAmazonResourceName(value); return *this;}

    
    inline TagrisSweepListItem& WithTagrisAmazonResourceName(Aws::String&& value) { SetTagrisAmazonResourceName(std::move(value)); return *this;}

    
    inline TagrisSweepListItem& WithTagrisAmazonResourceName(const char* value) { SetTagrisAmazonResourceName(value); return *this;}


    
    inline const Aws::String& GetTagrisInternalId() const{ return m_tagrisInternalId; }

    
    inline bool TagrisInternalIdHasBeenSet() const { return m_tagrisInternalIdHasBeenSet; }

    
    inline void SetTagrisInternalId(const Aws::String& value) { m_tagrisInternalIdHasBeenSet = true; m_tagrisInternalId = value; }

    
    inline void SetTagrisInternalId(Aws::String&& value) { m_tagrisInternalIdHasBeenSet = true; m_tagrisInternalId = std::move(value); }

    
    inline void SetTagrisInternalId(const char* value) { m_tagrisInternalIdHasBeenSet = true; m_tagrisInternalId.assign(value); }

    
    inline TagrisSweepListItem& WithTagrisInternalId(const Aws::String& value) { SetTagrisInternalId(value); return *this;}

    
    inline TagrisSweepListItem& WithTagrisInternalId(Aws::String&& value) { SetTagrisInternalId(std::move(value)); return *this;}

    
    inline TagrisSweepListItem& WithTagrisInternalId(const char* value) { SetTagrisInternalId(value); return *this;}


    
    inline long long GetTagrisVersion() const{ return m_tagrisVersion; }

    
    inline bool TagrisVersionHasBeenSet() const { return m_tagrisVersionHasBeenSet; }

    
    inline void SetTagrisVersion(long long value) { m_tagrisVersionHasBeenSet = true; m_tagrisVersion = value; }

    
    inline TagrisSweepListItem& WithTagrisVersion(long long value) { SetTagrisVersion(value); return *this;}

  private:

    Aws::String m_tagrisAccountId;
    bool m_tagrisAccountIdHasBeenSet;

    Aws::String m_tagrisAmazonResourceName;
    bool m_tagrisAmazonResourceNameHasBeenSet;

    Aws::String m_tagrisInternalId;
    bool m_tagrisInternalIdHasBeenSet;

    long long m_tagrisVersion;
    bool m_tagrisVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
