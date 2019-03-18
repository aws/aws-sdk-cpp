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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ResponseTimeRootCauseEntity.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of fields identifying the service in a response time
   * warning.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ResponseTimeRootCauseService">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API ResponseTimeRootCauseService
  {
  public:
    ResponseTimeRootCauseService();
    ResponseTimeRootCauseService(Aws::Utils::Json::JsonView jsonValue);
    ResponseTimeRootCauseService& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The service name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The service name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The service name.</p>
     */
    inline ResponseTimeRootCauseService& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline ResponseTimeRootCauseService& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The service name.</p>
     */
    inline ResponseTimeRootCauseService& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A collection of associated service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline ResponseTimeRootCauseService& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A collection of associated service names.</p>
     */
    inline ResponseTimeRootCauseService& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A collection of associated service names.</p>
     */
    inline ResponseTimeRootCauseService& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline ResponseTimeRootCauseService& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A collection of associated service names.</p>
     */
    inline ResponseTimeRootCauseService& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>The type associated to the service.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type associated to the service.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type associated to the service.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type associated to the service.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type associated to the service.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The account ID associated to the service.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID associated to the service.</p>
     */
    inline ResponseTimeRootCauseService& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline const Aws::Vector<ResponseTimeRootCauseEntity>& GetEntityPath() const{ return m_entityPath; }

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline bool EntityPathHasBeenSet() const { return m_entityPathHasBeenSet; }

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline void SetEntityPath(const Aws::Vector<ResponseTimeRootCauseEntity>& value) { m_entityPathHasBeenSet = true; m_entityPath = value; }

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline void SetEntityPath(Aws::Vector<ResponseTimeRootCauseEntity>&& value) { m_entityPathHasBeenSet = true; m_entityPath = std::move(value); }

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline ResponseTimeRootCauseService& WithEntityPath(const Aws::Vector<ResponseTimeRootCauseEntity>& value) { SetEntityPath(value); return *this;}

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline ResponseTimeRootCauseService& WithEntityPath(Aws::Vector<ResponseTimeRootCauseEntity>&& value) { SetEntityPath(std::move(value)); return *this;}

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline ResponseTimeRootCauseService& AddEntityPath(const ResponseTimeRootCauseEntity& value) { m_entityPathHasBeenSet = true; m_entityPath.push_back(value); return *this; }

    /**
     * <p>The path of root cause entities found on the service. </p>
     */
    inline ResponseTimeRootCauseService& AddEntityPath(ResponseTimeRootCauseEntity&& value) { m_entityPathHasBeenSet = true; m_entityPath.push_back(std::move(value)); return *this; }


    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline bool GetInferred() const{ return m_inferred; }

    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline bool InferredHasBeenSet() const { return m_inferredHasBeenSet; }

    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline void SetInferred(bool value) { m_inferredHasBeenSet = true; m_inferred = value; }

    /**
     * <p>A Boolean value indicating if the service is inferred from the trace.</p>
     */
    inline ResponseTimeRootCauseService& WithInferred(bool value) { SetInferred(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<ResponseTimeRootCauseEntity> m_entityPath;
    bool m_entityPathHasBeenSet;

    bool m_inferred;
    bool m_inferredHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
