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
#include <aws/xray/model/RootCauseException.h>
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
   * <p>A collection of segments and corresponding subsegments associated to a trace
   * summary fault error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/FaultRootCauseEntity">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API FaultRootCauseEntity
  {
  public:
    FaultRootCauseEntity();
    FaultRootCauseEntity(Aws::Utils::Json::JsonView jsonValue);
    FaultRootCauseEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the entity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline FaultRootCauseEntity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline FaultRootCauseEntity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline FaultRootCauseEntity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline const Aws::Vector<RootCauseException>& GetExceptions() const{ return m_exceptions; }

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline bool ExceptionsHasBeenSet() const { return m_exceptionsHasBeenSet; }

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline void SetExceptions(const Aws::Vector<RootCauseException>& value) { m_exceptionsHasBeenSet = true; m_exceptions = value; }

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline void SetExceptions(Aws::Vector<RootCauseException>&& value) { m_exceptionsHasBeenSet = true; m_exceptions = std::move(value); }

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline FaultRootCauseEntity& WithExceptions(const Aws::Vector<RootCauseException>& value) { SetExceptions(value); return *this;}

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline FaultRootCauseEntity& WithExceptions(Aws::Vector<RootCauseException>&& value) { SetExceptions(std::move(value)); return *this;}

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline FaultRootCauseEntity& AddExceptions(const RootCauseException& value) { m_exceptionsHasBeenSet = true; m_exceptions.push_back(value); return *this; }

    /**
     * <p>The types and messages of the exceptions.</p>
     */
    inline FaultRootCauseEntity& AddExceptions(RootCauseException&& value) { m_exceptionsHasBeenSet = true; m_exceptions.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline bool GetRemote() const{ return m_remote; }

    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline bool RemoteHasBeenSet() const { return m_remoteHasBeenSet; }

    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline void SetRemote(bool value) { m_remoteHasBeenSet = true; m_remote = value; }

    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline FaultRootCauseEntity& WithRemote(bool value) { SetRemote(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<RootCauseException> m_exceptions;
    bool m_exceptionsHasBeenSet;

    bool m_remote;
    bool m_remoteHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
