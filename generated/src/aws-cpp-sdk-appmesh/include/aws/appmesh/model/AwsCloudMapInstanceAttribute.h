/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the Cloud Map attribute information for your
   * virtual node.</p>  <p>Cloud Map is not available in the eu-south-1
   * Region.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/AwsCloudMapInstanceAttribute">AWS
   * API Reference</a></p>
   */
  class AwsCloudMapInstanceAttribute
  {
  public:
    AWS_APPMESH_API AwsCloudMapInstanceAttribute();
    AWS_APPMESH_API AwsCloudMapInstanceAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API AwsCloudMapInstanceAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of an Cloud Map service instance attribute key. Any Cloud Map
     * service instance that contains the specified key and value is returned.</p>
     */
    inline AwsCloudMapInstanceAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
