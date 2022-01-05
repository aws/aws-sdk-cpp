/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API AuditContext
  {
  public:
    AuditContext();
    AuditContext(Aws::Utils::Json::JsonView jsonValue);
    AuditContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAdditionalAuditContext() const{ return m_additionalAuditContext; }

    
    inline bool AdditionalAuditContextHasBeenSet() const { return m_additionalAuditContextHasBeenSet; }

    
    inline void SetAdditionalAuditContext(const Aws::String& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = value; }

    
    inline void SetAdditionalAuditContext(Aws::String&& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = std::move(value); }

    
    inline void SetAdditionalAuditContext(const char* value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext.assign(value); }

    
    inline AuditContext& WithAdditionalAuditContext(const Aws::String& value) { SetAdditionalAuditContext(value); return *this;}

    
    inline AuditContext& WithAdditionalAuditContext(Aws::String&& value) { SetAdditionalAuditContext(std::move(value)); return *this;}

    
    inline AuditContext& WithAdditionalAuditContext(const char* value) { SetAdditionalAuditContext(value); return *this;}

  private:

    Aws::String m_additionalAuditContext;
    bool m_additionalAuditContextHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
