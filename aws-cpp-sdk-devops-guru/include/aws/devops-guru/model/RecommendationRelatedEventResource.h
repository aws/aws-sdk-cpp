/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API RecommendationRelatedEventResource
  {
  public:
    RecommendationRelatedEventResource();
    RecommendationRelatedEventResource(Aws::Utils::Json::JsonView jsonValue);
    RecommendationRelatedEventResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline RecommendationRelatedEventResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline RecommendationRelatedEventResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline RecommendationRelatedEventResource& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline RecommendationRelatedEventResource& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline RecommendationRelatedEventResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline RecommendationRelatedEventResource& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
