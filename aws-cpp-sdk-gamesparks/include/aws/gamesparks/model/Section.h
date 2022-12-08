/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The configuration section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/Section">AWS
   * API Reference</a></p>
   */
  class Section
  {
  public:
    AWS_GAMESPARKS_API Section();
    AWS_GAMESPARKS_API Section(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Section& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of a configuration section.</p>
     */
    inline Aws::Utils::DocumentView GetAttributes() const{ return m_attributes; }

    /**
     * <p>The content of a configuration section.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The content of a configuration section.</p>
     */
    inline void SetAttributes(const Aws::Utils::Document& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The content of a configuration section.</p>
     */
    inline void SetAttributes(Aws::Utils::Document&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The content of a configuration section.</p>
     */
    inline Section& WithAttributes(const Aws::Utils::Document& value) { SetAttributes(value); return *this;}

    /**
     * <p>The content of a configuration section.</p>
     */
    inline Section& WithAttributes(Aws::Utils::Document&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>The name of the section.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the section.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the section.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the section.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the section.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the section.</p>
     */
    inline Section& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the section.</p>
     */
    inline Section& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the section.</p>
     */
    inline Section& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The size, in bytes, of the section contents.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size, in bytes, of the section contents.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size, in bytes, of the section contents.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size, in bytes, of the section contents.</p>
     */
    inline Section& WithSize(int value) { SetSize(value); return *this;}

  private:

    Aws::Utils::Document m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
