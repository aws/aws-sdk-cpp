/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The release label filters by application or version prefix.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ReleaseLabelFilter">AWS
   * API Reference</a></p>
   */
  class ReleaseLabelFilter
  {
  public:
    AWS_EMR_API ReleaseLabelFilter();
    AWS_EMR_API ReleaseLabelFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ReleaseLabelFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optional release label version prefix filter. For example,
     * <code>emr-5</code>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ReleaseLabelFilter& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ReleaseLabelFilter& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ReleaseLabelFilter& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional release label application filter. For example,
     * <code>spark@2.1.0</code>.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }
    inline ReleaseLabelFilter& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}
    inline ReleaseLabelFilter& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}
    inline ReleaseLabelFilter& WithApplication(const char* value) { SetApplication(value); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
