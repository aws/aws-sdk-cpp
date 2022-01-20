/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  class AWS_MEDIATAILOR_API SegmentDeliveryConfiguration
  {
  public:
    SegmentDeliveryConfiguration();
    SegmentDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SegmentDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    
    inline SegmentDeliveryConfiguration& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    
    inline SegmentDeliveryConfiguration& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    
    inline SegmentDeliveryConfiguration& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline SegmentDeliveryConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline SegmentDeliveryConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline SegmentDeliveryConfiguration& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
