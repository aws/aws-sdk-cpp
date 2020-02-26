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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a Lambda layer version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaLayerVersionDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsLambdaLayerVersionDetails
  {
  public:
    AwsLambdaLayerVersionDetails();
    AwsLambdaLayerVersionDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsLambdaLayerVersionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline AwsLambdaLayerVersionDetails& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCompatibleRuntimes() const{ return m_compatibleRuntimes; }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline bool CompatibleRuntimesHasBeenSet() const { return m_compatibleRuntimesHasBeenSet; }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline void SetCompatibleRuntimes(const Aws::Vector<Aws::String>& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = value; }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline void SetCompatibleRuntimes(Aws::Vector<Aws::String>&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::move(value); }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline AwsLambdaLayerVersionDetails& WithCompatibleRuntimes(const Aws::Vector<Aws::String>& value) { SetCompatibleRuntimes(value); return *this;}

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline AwsLambdaLayerVersionDetails& WithCompatibleRuntimes(Aws::Vector<Aws::String>&& value) { SetCompatibleRuntimes(std::move(value)); return *this;}

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline AwsLambdaLayerVersionDetails& AddCompatibleRuntimes(const Aws::String& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline AwsLambdaLayerVersionDetails& AddCompatibleRuntimes(Aws::String&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(std::move(value)); return *this; }

    /**
     * <p>The layer's compatible runtimes. Maximum number of 5 items.</p> <p>Valid
     * values: <code>nodejs10.x</code> | <code>nodejs12.x</code> | <code>java8</code> |
     * <code>java11</code> | <code>python2.7</code> | <code>python3.6</code> |
     * <code>python3.7</code> | <code>python3.8</code> | <code>dotnetcore1.0</code> |
     * <code>dotnetcore2.1</code> | <code>go1.x</code> | <code>ruby2.5</code> |
     * <code>provided</code> </p>
     */
    inline AwsLambdaLayerVersionDetails& AddCompatibleRuntimes(const char* value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }


    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline AwsLambdaLayerVersionDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline AwsLambdaLayerVersionDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The date that the version was created, in ISO 8601 format. For example,
     * 2018-11-27T15:10:45.123+0000. </p>
     */
    inline AwsLambdaLayerVersionDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}

  private:

    long long m_version;
    bool m_versionHasBeenSet;

    Aws::Vector<Aws::String> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
