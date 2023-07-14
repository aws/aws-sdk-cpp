﻿/**
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
   * <p>Specifies a transform that chooses the data property keys that you want to
   * drop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DropFields">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API DropFields
  {
  public:
    DropFields();
    DropFields(Aws::Utils::Json::JsonView jsonValue);
    DropFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropFields& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropFields& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline DropFields& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropFields& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropFields& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropFields& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropFields& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline DropFields& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPaths() const{ return m_paths; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline DropFields& WithPaths(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPaths(value); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline DropFields& WithPaths(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline DropFields& AddPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>A JSON path to a variable in the data structure.</p>
     */
    inline DropFields& AddPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet;

    Aws::Vector<Aws::Vector<Aws::String>> m_paths;
    bool m_pathsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
