/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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

  /**
   * <p>Specifies a column to be joined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JoinColumn">AWS API
   * Reference</a></p>
   */
  class JoinColumn
  {
  public:
    AWS_GLUE_API JoinColumn();
    AWS_GLUE_API JoinColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JoinColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column to be joined.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The column to be joined.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The column to be joined.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The column to be joined.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The column to be joined.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The column to be joined.</p>
     */
    inline JoinColumn& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The column to be joined.</p>
     */
    inline JoinColumn& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The column to be joined.</p>
     */
    inline JoinColumn& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The key of the column to be joined.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetKeys() const{ return m_keys; }

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline JoinColumn& WithKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetKeys(value); return *this;}

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline JoinColumn& WithKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline JoinColumn& AddKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>The key of the column to be joined.</p>
     */
    inline JoinColumn& AddKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
