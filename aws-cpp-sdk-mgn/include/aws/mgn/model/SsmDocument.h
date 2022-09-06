/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Source server replication type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SsmDocument">AWS API
   * Reference</a></p>
   */
  class AWS_MGN_API SsmDocument
  {
  public:
    SsmDocument();
    SsmDocument(Aws::Utils::Json::JsonView jsonValue);
    SsmDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source server replication type.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Source server replication type.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


    /**
     * <p>Source server replication type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Source server replication type.</p>
     */
    inline const Aws::String& GetSsmDocumentName() const{ return m_ssmDocumentName; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool SsmDocumentNameHasBeenSet() const { return m_ssmDocumentNameHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetSsmDocumentName(const Aws::String& value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetSsmDocumentName(Aws::String&& value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName = std::move(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetSsmDocumentName(const char* value) { m_ssmDocumentNameHasBeenSet = true; m_ssmDocumentName.assign(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithSsmDocumentName(const Aws::String& value) { SetSsmDocumentName(value); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithSsmDocumentName(Aws::String&& value) { SetSsmDocumentName(std::move(value)); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithSsmDocumentName(const char* value) { SetSsmDocumentName(value); return *this;}


    /**
     * <p>Source server replication type.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline SsmDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    bool m_mustSucceedForCutover;
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_ssmDocumentName;
    bool m_ssmDocumentNameHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
