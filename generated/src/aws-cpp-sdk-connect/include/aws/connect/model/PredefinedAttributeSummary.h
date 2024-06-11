﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Summary of a predefined attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PredefinedAttributeSummary">AWS
   * API Reference</a></p>
   */
  class PredefinedAttributeSummary
  {
  public:
    AWS_CONNECT_API PredefinedAttributeSummary();
    AWS_CONNECT_API PredefinedAttributeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PredefinedAttributeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PredefinedAttributeSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PredefinedAttributeSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PredefinedAttributeSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline PredefinedAttributeSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline PredefinedAttributeSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified region.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline PredefinedAttributeSummary& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline PredefinedAttributeSummary& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline PredefinedAttributeSummary& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
